#include<iostream>
using namespace std;

class base1{
    int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
        int get_base1int(){
            return base1int;
        }
};
class base2{
    int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
        int get_base2int(){
            return base2int;
        }
};

class derived : public base1, public base2{     // syntax
    public:
        void show(){
            cout<<"The value base1 is "<<get_base1int()<<endl;
            cout<<"The value base2 is "<<get_base2int()<<endl;
            cout<<"The value of their sum is "<<get_base1int()+get_base2int()<<endl;
        }
};

int main(){
    derived d;
    d.set_base1int(24);
    d.set_base2int(42);
    d.show();
    return 0;
}