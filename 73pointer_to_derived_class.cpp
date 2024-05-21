#include<iostream>
using namespace std;

class base{
    public:
        int var_base;
        void display(){
            cout<<"The value of a is "<<var_base<<endl;
        }
};
class derived: public base{
    public:
    int var_derived;
    void display(){
        cout<<"The value of a is "<<var_base<<endl;
        cout<<"The value of a is "<<var_derived<<endl;
    }
};

int main(){
    base *base_class_pointer;
    base base_class_object;
    // base_class_pointer = &base_class_object;
    // base_class_pointer->var_base=34;         // valid
    // base_class_pointer->display();           // valid

    derived derived_class_object;
    base_class_pointer = &derived_class_object;     // base class pointer pointing to a derived class object
    base_class_pointer->var_base=3;     // valid: even though the pointer is pointing to an object of derived class
    // base_class_pointer->var_derived=5;       // invalid: no var_derived in base class
    base_class_pointer->display();      // will invoke the display fn of the base class

    derived *derived_class_pointer;
    // derived_class_pointer = &base_class_object;      // invalid: derived's ptr can't point to base's obj
    derived_class_pointer = &derived_class_object;      // valid
    derived_class_pointer->var_base=3400;               // valid: because derived inherited var_base publicly
    derived_class_pointer->var_derived=54;              // valid
    derived_class_pointer->display();                   // will invoke the display fn of derived class

    return 0;
}