#include<iostream>
using namespace std;
class c2;
class c1{
    int data1;
    public:
        void setData(int value){
            data1 = value;
        }
        void dispData(){
            cout<<data1;
        }
        friend void swap (c1 &a, c2 &b);
};

class c2{
    int data2;
    public:
        void setData(int value){
            data2 = value;
        }
        void dispData(){
            cout<<data2;
        }
        friend void swap (c1 &a, c2 &b);
};

void swap(c1 &a, c2 &b){
    int temp = a.data1;
    a.data1 = b.data2;
    b.data2 = temp;
}

int main(){
    c1 a; c2 b;
    a.setData(7);
    b.setData(8);
    cout<<"Before swap: a=";
    a.dispData();
    cout<<" and b=";
    b.dispData();
    swap(a,b);
    cout<<endl<<"After swap: a=";
    a.dispData();
    cout<<" and b=";
    b.dispData();
    return 0;
}