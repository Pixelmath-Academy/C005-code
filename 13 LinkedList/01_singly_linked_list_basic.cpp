
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

struct SinglyList {
    Node* head = nullptr;
    ~SinglyList() { clear(); }

    void push_front(int v) {
        Node* n = new Node(v);
        n->next = head;
        head = n;
    }

    void push_back(int v) {
        Node* n = new Node(v);
        if (!head) { head = n; return; }
        Node* cur = head;
        while (cur->next) cur = cur->next;
        cur->next = n;
    }

    bool insert_at(size_t idx, int v) { // 0-based
        if (idx == 0) { push_front(v); return true; }
        Node* cur = head;
        for (size_t i = 0; cur && i + 1 < idx; ++i) cur = cur->next;
        if (!cur) return false;
        Node* n = new Node(v);
        n->next = cur->next;
        cur->next = n;
        return true;
    }

    bool erase_value(int v) {
        Node* cur = head;
        Node* prev = nullptr;
        while (cur) {
            if (cur->val == v) {
                if (prev) prev->next = cur->next;
                else head = cur->next;
                delete cur;
                return true;
            }
            prev = cur; cur = cur->next;
        }
        return false;
    }

    bool erase_at(size_t idx) { // 0-based
        Node* cur = head;
        Node* prev = nullptr;
        for (size_t i = 0; cur && i < idx; ++i) { prev = cur; cur = cur->next; }
        if (!cur) return false;
        if (prev) prev->next = cur->next; else head = cur->next;
        delete cur;
        return true;
    }

    Node* find(int v) const {
        Node* cur = head;
        while (cur) {
            if (cur->val == v) return cur;
            cur = cur->next;
        }
        return nullptr;
    }

    void print() const {
        Node* cur = head;
        cout << "[";
        while (cur) {
            cout << cur->val;
            if (cur->next) cout << " -> ";
            cur = cur->next;
        }
        cout << "]\n";
    }

    void clear() {
        Node* cur = head;
        while (cur) {
            Node* nxt = cur->next;
            delete cur;
            cur = nxt;
        }
        head = nullptr;
    }
};

int main() {
    SinglyList li;
    li.push_back(1);
    li.push_back(2);
    li.push_front(0);
    li.insert_at(2, 99);
    li.print(); // [0 -> 1 -> 99 -> 2]
    li.erase_value(99);
    li.erase_at(0);
    cout << "Find 2: " << (li.find(2) ? "yes" : "no") << "\n";
    li.print(); // [1 -> 2]
    return 0;
}
