
#include <iostream>
using namespace std;

struct DNode {
    int val;
    DNode* prev;
    DNode* next;
    DNode(int v) : val(v), prev(nullptr), next(nullptr) {}
};

struct DoublyList {
    DNode* head = nullptr;
    DNode* tail = nullptr;

    ~DoublyList() { clear(); }

    void push_front(int v) {
        DNode* n = new DNode(v);
        n->next = head;
        if (head) head->prev = n; else tail = n;
        head = n;
    }

    void push_back(int v) {
        DNode* n = new DNode(v);
        n->prev = tail;
        if (tail) tail->next = n; else head = n;
        tail = n;
    }

    bool erase(DNode* x) {
        if (!x) return false;
        if (x->prev) x->prev->next = x->next; else head = x->next;
        if (x->next) x->next->prev = x->prev; else tail = x->prev;
        delete x;
        return true;
    }

    void reverse() {
        DNode* cur = head;
        tail = head;
        while (cur) {
            swap(cur->prev, cur->next);
            if (!cur->prev) { head = cur; break; }
            cur = cur->prev;
        }
    }

    DNode* find(int v) const {
        for (DNode* cur = head; cur; cur = cur->next) if (cur->val == v) return cur;
        return nullptr;
    }

    void print_forward() const {
        cout << "[";
        for (DNode* cur = head; cur; cur = cur->next) {
            cout << cur->val;
            if (cur->next) cout << " <-> ";
        }
        cout << "]\n";
    }

    void print_backward() const {
        cout << "[";
        for (DNode* cur = tail; cur; cur = cur->prev) {
            cout << cur->val;
            if (cur->prev) cout << " <-> ";
        }
        cout << "]\n";
    }

    void clear() {
        DNode* cur = head;
        while (cur) { DNode* nxt = cur->next; delete cur; cur = nxt; }
        head = tail = nullptr;
    }
};

int main() {
    DoublyList dl;
    dl.push_back(1);
    dl.push_back(2);
    dl.push_front(0);
    dl.print_forward();
    dl.print_backward();
    dl.erase(dl.find(1));
    dl.print_forward();
    dl.reverse();
    dl.print_forward();
    return 0;
}
