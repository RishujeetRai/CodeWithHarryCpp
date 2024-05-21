#include<iostream>
using namespace std;
class c2;
class c1{
    int data1;
    public:
        void setValue(int value){
            data1 = value;
        }
        friend void sum(c1 x, c2 y);
};

class c2{
    int data2;
    public:
        void setValue(int value){
            data2 = value;
        }
        friend void sum(c1 x, c2 y);
};

void sum(c1 x, c2 y){
    cout<<"Sum is "<<(x.data1+y.data2);     // would've thrown error if sum couldn't access data1 and data2
}

int main(){
    c1 a; c2 b;
    a.setValue(9);
    b.setValue(10);
    sum(a,b);
    return 0;
}