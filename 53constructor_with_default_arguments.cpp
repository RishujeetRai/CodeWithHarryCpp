#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    int data3;
    public:
        simple(int a, int b=9, int c=8){
            data1=a, data2=b, data3=c;
        }
        void printData();
};

void simple :: printData(){
    cout<<"The data is: "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main(){
    simple s1(6, 3, 1);     // The data is: 6, 3 and 1
    s1.printData();

    simple s2(2, 4);        // The data is: 2, 4 and 8
    s2.printData();

    simple s3(5);           // The data is: 5, 9 and 8
    s3.printData();
    return 0;
}