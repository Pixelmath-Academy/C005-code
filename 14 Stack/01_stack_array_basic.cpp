
#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T, size_t N>
class ArrayStack {
    T data[N];
    size_t topIdx = 0; // next free slot
public:
    bool empty() const { return topIdx == 0; }
    size_t size() const { return topIdx; }
    size_t capacity() const { return N; }

    void push(const T& v){
        if(topIdx == N) throw overflow_error("stack overflow");
        data[topIdx++] = v;
    }
    void pop(){
        if(empty()) throw underflow_error("stack underflow");
        --topIdx;
    }
    T& top(){
        if(empty()) throw underflow_error("stack empty");
        return data[topIdx-1];
    }
    const T& top() const {
        if(empty()) throw underflow_error("stack empty");
        return data[topIdx-1];
    }
};

int main(){
    ArrayStack<int, 5> st;
    st.push(10); st.push(20); st.push(30);
    cout << "top=" << st.top() << " size=" << st.size() << "/" << st.capacity() << "\n";
    st.pop();
    cout << "top=" << st.top() << " size=" << st.size() << "\n";
    return 0;
}
