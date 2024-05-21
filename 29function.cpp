#include<iostream>
using namespace std;

int sum(int a, int b);      // Function prototype
// int sum(int, int);          // Also acceptable for defining function prototype

int main(){
    int num1, num2;
    cout<<"Enter the value of num1: ";
    cin>>num1;
    cout<<"Enter the value of num2: ";
    cin>>num2;
    cout<<"The value of their sum is: "<<sum(num1, num2);
    return 0;
}

int sum(int a, int b){
    int c = a + b;
    return c;
}