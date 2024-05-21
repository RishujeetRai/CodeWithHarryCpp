#include<iostream>
using namespace std;
int main(){
    int x = 8;      // x is original variable
    int &y = x;     // y is reference variable   // y refers to x
    // neither the value of x has been copied nor has it's address been stored in y
    // y is merely just another name for x now
    cout<<x<<endl;
    cout<<y<<endl;
}