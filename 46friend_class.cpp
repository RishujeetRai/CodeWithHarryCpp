#include<iostream>
using namespace std;

class complex;      // forward declaration

class calculator{
    public:
        int sum(int a1, int b1){
            return a1+b1;
        }
        int sumRealComplex(complex o1, complex o2);
        int sumImgComplex(complex o1, complex o2);
};

class complex{
    int a, b;
    public:
        void getData(int a1, int b1){
            a=a1, b=b1;
        }
        void printData(){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        // Individually declaring functions of different class as friends
        // friend int calculator :: sumRealComplex(complex o1, complex o2);
        // friend int calculator :: sumImgComplex(complex o1, complex o2);
        
        // Declaring the entire class as friend
        friend class calculator;
};

int calculator :: sumRealComplex(complex o1, complex o2){
    return o1.a + o2.a;
}
int calculator :: sumImgComplex(complex o1, complex o2){
    return o1.b + o2.b;
}

int main(){
    complex o1, o2;
    o1.getData(2,3);
    o1.printData();
    o2.getData(6,8);
    o2.printData();
    calculator comp;
    int r, i;
    r = comp.sumRealComplex(o1,o2);
    i = comp.sumImgComplex(o1,o2);
    cout<<"The sum complex number is: "<<r<<" + "<<i<<"i"<<endl;
    return 0;
}