#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
        void setData(int value1, int value2){
            real = value1;
            img = value2;
        }
        void dispData(){
            cout<<"The complex num is: "<<real<<" + "<<img<<"i"<<endl;
        }
        complex(void);      // constructor declaration (must always be in the public section of the class)
};

complex :: complex(void){       // does not have return types
// default constructor: because it takes no parameters
    real = 0;
    img = 0;
    // cout<<"Hello World"<<endl;       // will be printed wherever an object of this class is declared
}

int main(){
    complex c1, c2, c3;     // costructors are automatically invoked while making objects
    c1.dispData();
    c2.setData(3,4);
    c2.dispData();
    c3.dispData();
    return 0;
}