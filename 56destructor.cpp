#include<iostream>
using namespace std;
// destructor is called implicitly by the compiler, i.e., automatically
// destructor neither takes an argument nor does it return any value
int count = 0;      // global variable count
class num{
    int a;
    public:
        num(){      // constructor
            count++;
            cout<<"Constructor called for object number "<<count<<endl;
        }
        ~num(){     // destructor
            cout<<"Destructor called for object number "<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"Inside main function"<<endl;
    cout<<"Creating three objects"<<endl;
    num a, b, c;    // constructor called thrice
    cout<<"Creating a fourth and fifth object"<<endl;
    // objects and variables created within a block only remain till the block
    {
        num d, e;   // constructor called twice again
        // destructor will be called automatically for the objects made in this block before leaving this block
    }
    // destructor will be called automatically for the objects made in this main fn before leaving this main fn
    return 0;
}