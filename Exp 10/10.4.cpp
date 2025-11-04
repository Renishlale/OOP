#include <iostream>
using namespace std;

template<class T>
class Stack {
    T st[10];
    int top;
public:
    Stack(){ top = -1; }

    void push(T x){
        st[++top] = x;
        cout<<"Pushed: "<<x<<endl;
    }
    void pop(){
        cout<<"Popped: "<<st[top--]<<endl;
    }
};

int main(){
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    s.pop();
}
