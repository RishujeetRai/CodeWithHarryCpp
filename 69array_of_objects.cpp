#include<iostream>
using namespace std;

class test{
    int a, b;
    static int count;
    public:
        void set_data(int x, int y){
            a = x;
            b = y;
        }
        void get_data(){
            cout<<"The value of a"<<count<<" is "<<a<<endl;
            cout<<"The value of b"<<count<<" is "<<b<<endl<<endl;
            count++;
        }
};
int test :: count = 1;

int main(){
    test *ptr = new test[4];
    ptr->set_data(3,4);         // same as: ptr[0].set_data(3,4);
    ptr->get_data();            // same as: ptr[0].get_data();
    (ptr+1)->set_data(5,6);     // same as: (ptr[1]).set_data(5,6);
    (ptr+1)->get_data();        // same as: (ptr[1]).get_data();
    (ptr+2)->set_data(7,8);     // same as: ptr[2].set_data(7,8);
    (ptr+2)->get_data();        // same as: ptr[2].get_data();
    (ptr+3)->set_data(9,5);     // same as: (ptr[3]).set_data(9,5);
    (ptr+3)->get_data();        // same as: (ptr[3]).get_data();
    return 0;
}