#include<iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    else if(n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<n<<"th term in the fibonacci sequence is: "<<fib(n);
    return 0;
}