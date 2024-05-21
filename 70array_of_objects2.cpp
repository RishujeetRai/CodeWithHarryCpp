#include<iostream>
using namespace std;

class item{
    int id;
    float price;
    public:
        void set_data(){
            int a;
            float b;
            cout<<"Enter id and price:\n";
            cin>>id>>price;
        }
        void get_data(){
            cout<<"The id is "<<id<<endl;
            cout<<"The price is "<<price<<endl;
        }
};

int main(){
    item *ptr = new item[3];
    for(int i=0; i<3; i++){
        cout<<"For item no. "<<i+1<<endl;
        (ptr+i)->set_data();
    }
    for(int i=0; i<3; i++){
        cout<<"For item no. "<<i+1<<endl;
        (ptr+i)->get_data();            // same
        //(*(ptr+i)).get_data();        // same         // (*ptr).get_data();
        //ptr[i].get_data();            // same
    }
    return 0;
}

/*
ptr ke sath (without dereference operator): arrow(->) operator
example: ptr->set_data(); or (ptr+1)->set_data();

*ptr ke sath (with dereference operator): dot(.) operator
example: (*ptr).set_data(); or (*(ptr+1)).set_data();

ptr[i] ke sath (pointers as array instances): dot(.) operator
example: ptr[i].set_data() or ptr[i+1].set_data()
*/