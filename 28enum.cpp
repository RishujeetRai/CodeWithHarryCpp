#include<iostream>
using namespace std;
int main(){
    // enum: allocate numbers to values
    enum tomodachi {Niki, Chirag, Aryaman};
    // enum is used to create datatypes
    // tomodachi is now a datatype
    cout<<Niki<<endl;             // returns 0
    cout<<Chirag<<endl;           // returns 1
    cout<<Aryaman<<endl<<endl;    // returns 2

    cout<<sizeof(Niki)<<endl;              // returns integer type size
    cout<<sizeof(tomodachi)<<endl<<endl;        // returns integer type size
    
    tomodachi m1 = Niki;
    tomodachi m2 = Chirag;
    tomodachi m3 = Aryaman;
    cout<<m1<<endl;            // returns 0
    cout<<m2<<endl;           // returns 1
    cout<<m3<<endl<<endl;    // returns 2

    cout<<sizeof(m1)<<endl;                 // returns integer type size

    return 0;
}