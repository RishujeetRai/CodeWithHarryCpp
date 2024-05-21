#include<iostream>
using namespace std;

class employee{
    int id, salary;
    public:
        void getid(){
            cout<<"Enter the id of the employee: ";
            cin>>id;
        }
        void dispid(){
            cout<<"The id of the employee is: "<<id<<endl;
        }
};

int main(){
    employee fb[4];
    for(int i=0; i<4; i++){
        fb[i].getid();
        fb[i].dispid();
    }
    return 0;
}