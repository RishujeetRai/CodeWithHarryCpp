#include<iostream>
using namespace std;

void f1(int a){
    cout<<"AE AE AE AE "<<a<<endl;
}

template <class T>
void f1(T a){
    cout<<"muda da yo "<<a<<endl;
}

int main(){
    f1(3);          // which f1 will be called?
    // exact match takes highest priorty
    return 0;
}