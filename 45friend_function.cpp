#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        void setData(int a1, int b1){
            a=a1, b=b1;
        }
        void dispData(){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        friend complex setDataBySum(complex o1, complex o2);
        // now the just another normal function can use the private variables of this class
};

complex setDataBySum(complex o1, complex o2){   // just another normal function
    complex o3;
    o3.a = o1.a + o2.a;     // wanting to use private variables of a class
    o3.b = o1.b + o2.b;
    return o3;
}

int main(){
    complex o1, o2, o3;
    o1.setData(3,4);
    o1.dispData();

    o2.setData(5,6);
    o2.dispData();

    // o3.setDataBySum(o1,o2);      // invalid cause setDataBySum is not a member fn of class complex
    o3 = setDataBySum(o1,o2);       // it's just another normal function
    o3.dispData();
    return 0;
}