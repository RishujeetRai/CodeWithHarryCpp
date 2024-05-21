#include<iostream>
using namespace std;

class base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void base :: setData(){
    data1 = 22;
    data2 = 24;
}
int base :: getData1(){
    return data1;
}
int base :: getData2(){
    return data2;
}

class derived : public base{
    int data3;
    public:
        void process();
        void display();
};

void derived :: process(){
    data3 = data2 * getData1();
}
void derived :: display(){
    cout<<"Data1 is "<<getData1()<<endl;
    cout<<"Data2 is "<<data2<<endl;
    cout<<"Data3 is "<<data3<<endl;

}

int main(){
    derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}