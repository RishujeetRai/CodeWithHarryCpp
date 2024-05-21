#include<iostream>
using namespace std;
int main(){
    int i = 3;
    int *ptr = &i;
    cout<<"The value at address ptr is "<<*ptr<<endl;

    // new  keyword
    int *p1 = new int(4);           // dynamically allocating an integer value to an integer pointer
    cout<<"The value at address p1 is "<<*p1<<endl;
    float *p2 = new float(5.5);     // dynamically allocating an integer value to a float pointer
    cout<<"The value at address p2 is "<<*p2<<endl<<endl;

    int *p3 = new int[3];           // dynamically allocating an array in pointers
    p3[0] = 6;
    p3[1] = 7;
    p3[2] = 8;
    cout<<"The value p3[0] is "<<p3[0]<<endl;
    cout<<"The value p3[1] is "<<p3[1]<<endl;
    cout<<"The value p3[2] is "<<p3[2]<<endl<<endl;

    // delete keyword
    delete[] p3;                    // dynamically deleting the array assigned to the pointers
    cout<<"The value p3[0] is "<<p3[0]<<endl;
    cout<<"The value p3[1] is "<<p3[1]<<endl;
    cout<<"The value p3[2] is "<<p3[2]<<endl<<endl;

    return 0;
}