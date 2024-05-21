#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        void setData(int a1, int b1){
            a = a1;
            b = b1;
        }
        void setDataBySum(complex o1, complex o2){
        // o1 and o2 are two objects of complex datatype that will be passed to this function
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printComplex(){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex o1, o2, o3;

    o1.setData(2,3);
    o1.printComplex();

    o2.setData(5,6);
    o2.printComplex();

    o3.setDataBySum(o1,o2);
    o3.printComplex();
    return 0;
}