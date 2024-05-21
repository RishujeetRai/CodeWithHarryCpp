#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
        void getid();
        void dispid();
};
int employee :: count=0;
// int employee :: count;      // also initializes the count as zero

void employee :: getid(){
    cout<<"For employee no. "<<count+1<<", enter the employee id : ";
    cin>>id;
    count++;
}
void employee :: dispid(){
    cout<<"The id is: "<<id<<endl;
}

int main(){
    employee herry, rohen, lovesh;
    herry.getid();
    herry.dispid();

    rohen.getid();    
    rohen.dispid();

    lovesh.getid();
    lovesh.dispid();
    return 0;
}