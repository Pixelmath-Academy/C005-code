
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v): val(v), next(nullptr) {}
};

struct CircularList {
    Node* tail = nullptr; // tail->next is head when not empty
    ~CircularList() { clear(); }

    void push_back(int v) {
        Node* n = new Node(v);
        if (!tail) { tail = n; n->next = n; }
        else { n->next = tail->next; tail->next = n; tail = n; }
    }

    void print_once() const {
        if (!tail) { cout << "[]\n"; return; }
        Node* head = tail->next;
        cout << "[";
        Node* cur = head;
        do {
            cout << cur->val;
            cur = cur->next;
            if (cur != head) cout << " -> ";
        } while (cur != head);
        cout << "]\n";
    }

    // Josephus elimination step size k
    int josephus(int k) {
        if (!tail || k <= 0) return -1;
        Node* cur = tail->next; // head
        Node* prev = tail;
        while (cur != cur->next) {
            for (int i = 1; i < k; ++i) { prev = cur; cur = cur->next; }
            // remove cur
            prev->next = cur->next;
            if (cur == tail) tail = prev;
            Node* del = cur;
            cur = cur->next;
            delete del;
        }
        int winner = cur->val;
        delete cur;
        tail = nullptr;
        return winner;
    }

    void clear() {
        if (!tail) return;
        Node* head = tail->next;
        Node* cur = head;
        tail->next = nullptr; // break the cycle
        while (cur) { Node* nxt = cur->next; delete cur; cur = nxt; }
        tail = nullptr;
    }
};

int main() {
    CircularList cl;
    for (int i = 1; i <= 7; ++i) cl.push_back(i);
    cl.print_once();
    cout << "Josephus winner (k=3): " << cl.josephus(3) << "\n";
    return 0;
}
