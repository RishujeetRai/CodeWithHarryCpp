#include<iostream>
using namespace std;

// A function can't change the value of constant arguments passed to it
// For example, if we want to make a fn strlen(), we won't want that fn to change the string passed to it

void swap(const int *a, const int *b){
    // This swap will not work
    // As the value of a and b will not interchange
    // Because they were passed as constant arguments
    const int *temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 33, b = 44;
    cout<<"Before swap, a and b are:\n"<<a<<endl<<b<<endl;
    swap(&a,&b);
    cout<<"After swap, a and b are:\n"<<a<<endl<<b<<endl;
    return 0;
}