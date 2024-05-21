#include<iostream>
using namespace std;
// this is a pointer which points to the object which invokes the member function
class A{
    int a;
    public:
        void setData(int a){
            // a = a;       // a returns garbage value
            this->a=a;      // valid way
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A obj;
    obj.setData(3);
    obj.getData();
    return 0;
}