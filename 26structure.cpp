#include<iostream>
using namespace std;

struct employee{
    int ID;
    char faveChar;
    float salary;
};

int main(){
    struct employee rishu;       // the way of the C
    // employee rishu;           // also valid in C++
    
    rishu.ID = 2345;
    rishu.faveChar = 'C';
    rishu.salary = 50000;
    cout<<"The ID of employee Rishu is: "<<rishu.ID<<endl;
    cout<<"The favorite character of employee Rishu is: "<<rishu.faveChar<<endl;
    cout<<"The salary of employee Rishu is: "<<rishu.salary<<endl;
    return 0;
}