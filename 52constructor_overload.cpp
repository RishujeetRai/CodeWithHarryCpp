#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(int x, int y){
            a = x;
            b = y;
        }
        complex(int x){
            a = x;
            b = 0;
        }
        complex(){
            a = 0;
            b = 0;
        }
        void printComplex(){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1(3,4);
    c1.printComplex();

    complex c2(7);
    c2.printComplex();

    complex c3;
    c3.printComplex();
    return 0;
}