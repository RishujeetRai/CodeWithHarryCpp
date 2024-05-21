// inline fn not recommended for recursions, static variables,
// loops, switch, go-to, return type fn withouth return statements

#include<iostream>
using namespace std;

inline int sum(int a, int b){
    return a + b;
}
// Inline function helps execute the function in the middle of main program, whenever it is called.
// Recommended for small and simple function.
// Not recommended for heavy functions as it'll increase the load of the program on the cpu.
// Doesn't take the time of sending values or their copies to the fn, and then returning with the desired value.

// Not recommended in case of recursions, static variables
// On second call of a function, the value of a static variable remains as it was in the previous call
int prod(int a, int b){
    static int c = 0;   // This runs only once.
    c = c + 1;      // Next time this fn is called, the value of c is retained
    return a*b+c;
}
inline int INLINEprod(int a, int b){
    static int c = 0;   // This runs only once.
    c = c + 1;      // Next time this fn is called, the value of c is retained
    return a*b+c;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b:\n";
    cin>>a>>b;
    cout<<"The value of their sum is: "<<sum(a,b)<<endl;
    cout<<"The value of their sum is: "<<sum(a,b)<<endl;
    cout<<"The value of their sum is: "<<sum(a,b)<<endl;
    cout<<"The value of their sum is: "<<sum(a,b)<<endl;
    cout<<"The value of their sum is: "<<sum(a,b)<<endl<<endl;

    cout<<"The value of their product+staticVARc is: "<<prod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<prod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<prod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<prod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<prod(a,b)<<endl<<endl;

    cout<<"Using inline:\nThe value of their product+staticVARc is: "<<INLINEprod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<INLINEprod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<INLINEprod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<INLINEprod(a,b)<<endl;
    cout<<"The value of their product+staticVARc is: "<<INLINEprod(a,b)<<endl;
    cout<<"lol it made no difference"<<endl<<endl;


    return 0;
}