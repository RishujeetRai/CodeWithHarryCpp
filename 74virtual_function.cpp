#include<iostream>
using namespace std;

class base{
    public:
        int var_base=1;
        virtual void display(){     // this display fn has been declared to be virtual now
            cout<<"The value of a is "<<var_base<<endl;
        }
};
class derived: public base{
    public:
    int var_derived=2;
    void display(){
        cout<<"The value of a is "<<var_base<<endl;
        cout<<"The value of a is "<<var_derived<<endl;
    }
};

int main(){
    base *base_class_pointer;
    derived derived_class_object;
    base_class_pointer = &derived_class_object;
    base_class_pointer->display();      // now the display fn of derived will be invoked because base's is virtual
    return 0;
}