#include <iostream>
using namespace std;

template <class T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for(int i=0;i<n;i++) sum += arr[i];
    return sum;
}

int main() {
    int a[5]={1,2,3,4,5};
    float b[5]={1.1,2.2,3.3,4.4,5.5};
    double c[5]={1.11,2.22,3.33,4.44,5.55};

    cout<<"Int Sum = "<<sumArray(a,5)<<endl;
    cout<<"Float Sum = "<<sumArray(b,5)<<endl;
    cout<<"Double Sum = "<<sumArray(c,5)<<endl;
}
