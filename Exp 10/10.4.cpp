 #include <iostream>
using namespace std;

template<class T>
class Stack {
    T st[10];
    int top;
public:
    Stack() { top = -1; }

    void push(T x) {
        if (top == 9) {
            cout << "Stack is full. Cannot push " << x << endl;
        } else {
            st[++top] = x;
            cout << "Pushed: " << x << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            cout << "Popped: " << st[top--] << endl;
        }
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
