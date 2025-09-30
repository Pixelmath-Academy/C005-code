
#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
struct Node {
    T val; Node* next;
    Node(const T& v): val(v), next(nullptr) {}
};

template <typename T>
class LinkedStack {
    Node<T>* head = nullptr;
    size_t sz = 0;
public:
    ~LinkedStack(){ clear(); }
    bool empty() const { return sz == 0; }
    size_t size() const { return sz; }

    void push(const T& v){
        Node<T>* n = new Node<T>(v);
        n->next = head;
        head = n;
        ++sz;
    }
    void pop(){
        if(empty()) throw underflow_error("stack underflow");
        Node<T>* n = head;
        head = head->next;
        delete n;
        --sz;
    }
    T& top(){
        if(empty()) throw underflow_error("stack empty");
        return head->val;
    }
    void clear(){
        while(head){ Node<T>* n=head; head=head->next; delete n; }
        sz = 0;
    }
};

int main(){
    LinkedStack<string> st;
    st.push("Alice");
    st.push("Bob");
    cout << st.top() << "\n"; // Bob
    st.pop();
    cout << st.top() << "\n"; // Alice
    return 0;
}
