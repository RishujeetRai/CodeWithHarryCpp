#include<iostream>
using namespace std;
int main(){
    int a = 3;
    float b = 45.32;
    cout<<"The value of int a is: "<<a<<endl;
    cout<<"The value of float a is: "<<(float)a<<endl;
    cout<<"The value of float a is: "<<float(a)<<endl<<endl;
    // typecasting using (float)a or float(a) is both valid
    cout<<"The value of float b is: "<<b<<endl;
    cout<<"The value of int b is: "<<(int)b<<endl;
    cout<<"The value of int b is: "<<int(b)<<endl<<endl;
    // similarly typecasting using (int)b or int(b) is both valid
    int c = int(b);     // is also valid
    cout<<"The value of int c is: "<<c<<endl<<endl;

    cout<<"int a + float b = "<<a+b<<endl;          // returns a float value
    cout<<"int a + (int)b = "<<a+(int)b<<endl;      // returns an int value
    cout<<"int a + int(b) = "<<a+int(b)<<endl;      // returns an int value
}