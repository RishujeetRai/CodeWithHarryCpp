#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
        void setData(int value1, int value2){
            real = value1;
            img = value2;
        }
        void dispData(){
            cout<<"The complex num is: "<<real<<" + "<<img<<"i"<<endl;
        }
        complex(int a, int b);
};

complex :: complex(int a, int b){
// parametrized constructor: because it takes parameters
    real = a;
    img = b;
}

int main(){
    // complex c1, c2, c3;      // will throw error now that we have not declared any default constructor

    // Implicit declaration
    complex c1(3,4);
    c1.dispData();

    complex c2(0,0);
    c2.setData(4,5);            // fn will overwrite the values set by constructor
    c2.dispData();

    // Explicit declaration
    complex c3 = complex(5,6);
    c3.dispData();
    return 0;
}