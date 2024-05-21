#include<iostream>
using namespace std;

void valueSwap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void referenceSwap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void referenceVarSwap(int &a, int &b){      // swap using reference variables
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cout<<"Enter the value of num1: ";
    cin>>a;
    cout<<"Enter the value of num2: ";
    cin>>b;
    cout<<"The value of a and b is: "<<a<<"   "<<b<<endl<<endl;
    valueSwap(a,b);
    cout<<"After call by value function call:\nSwapped value of a and b is: "<<a<<"   "<<b<<endl<<endl;
    referenceSwap(&a,&b);
    cout<<"After call by reference function call:\nSwapped value of a and b is: "<<a<<"   "<<b<<endl<<endl;
    referenceVarSwap(a,b);
    cout<<"After call by reference variable function call:\nSwapped value of a and b is: "<<a<<"   "<<b<<endl;

    return 0;
}