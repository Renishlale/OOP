#include <iostream>
using namespace std;

template<class T>
class Calc {
public:
    T a,b;
    Calc(T x, T y){ a=x; b=y; }

    T add(){ return a+b; }
    T sub(){ return a-b; }
    T mul(){ return a*b; }
    T div(){ return a/b; }
};

int main(){
    Calc<int> c(10,5);
    cout<<"Add = "<<c.add()<<endl;
    cout<<"Sub = "<<c.sub()<<endl;
    cout<<"Mul = "<<c.mul()<<endl;
    cout<<"Div = "<<c.div()<<endl;
}
