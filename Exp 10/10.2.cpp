#include <iostream>
#include <string>
using namespace std;

template<class T>
T square(T x){
    return x*x;
}

// Specialization for string
template<>
string square(string s){
    return s + s;
}

int main(){
    int n = 5;
    string s = "Hi";

    cout<<"Square of int: "<<square(n)<<endl;
    cout<<"Square of string: "<<square(s)<<endl;
}
