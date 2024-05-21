#include<iostream>
using namespace std;

class king{
    int a, b;
    static int count;
    public:
        void set_data(int i, int j){
            a = i;
            b = j;
        }
        void get_data(){
            cout<<"The value of a"<<count<<" is "<<a<<endl;
            cout<<"The value of b"<<count<<" is "<<b<<endl<<endl;
            count++;
        }
};
int king :: count = 1;

int main(){
    king k;
    king *ptr = &k;
    // ptr is a pointer of datatype king pointing to k which is an object of same datatype/class king
    (*ptr).set_data(8,9);       // * is dereference operator
    (*ptr).get_data();

    king *ptr2 = new king;      // using the new operator: creating a pointer of class king
    (*ptr2).set_data(3,4);
    (*ptr2).get_data();

    king *ptr3 = new king;      // using the new operator: creating a pointer of class king
    ptr3->set_data(5,6);        // arrow operator: means ptr3 jis object ko point kr rha h uska set_data(3,4)
    ptr3->get_data();

    // king *ptr4 = new king(4);   // assigning int value 4 at object address at ptr4 : invalid
    // ptr4->get_data();

    king *ptr4 = new king(k);   // assigning object k to object address at ptr4 : valid
    // same as: king *ptr4 = new king(*ptr1);
    (*ptr4).get_data();         // same as: ptr4->get_data();

    king *ptr5 = new king[3];   // assigning array to pointer using new
    ptr5[0].set_data(1,3);
    ptr5[1].set_data(2,4);
    ptr5[2].set_data(3,5);
    ptr5[0].get_data();
    ptr5[1].get_data();
    ptr5[2].get_data();

    return 0;
}