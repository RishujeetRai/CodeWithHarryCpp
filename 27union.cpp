#include<iostream>
using namespace std;

union currency{
    int cash;
    char label;
    float dolla;
};

int main(){
    union currency c1;          // the way of the C
    //  currency c1;            // also valid in C++
    
    // At once, only one datatype from union can be used
    // the other gets overwritten so a garbage value is returned

    c1.cash = 4342;
    c1.label = 'A';     // c1.cash is overwritten
    c1.dolla = 60;      // c1.cash and c1.label is overwritten
    // cout<<c1.cash<<endl;         // garbage value
    // cout<<c1.label<<endl;        // garbage value
    cout<<c1.dolla<<endl;

    c1.label = 'A';     // c1.cash and c1.dolla is overwritten
    cout<<c1.label<<endl;

    c1.cash = 4342;     // c1.label and c1.dolla is overwritten
    cout<<c1.cash<<endl;

    // Union is recommended for better memory management
    // As it frees up the space of it's other datatypes when using another of it's datatypes

    return 0;
}