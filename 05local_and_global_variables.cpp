#include<iostream>
using namespace std;
int glo = 89;       // global variable

void print(){
    cout<<glo;
    // will print the global value of variable glo as there is no local variable glo in this function
}

int main(){
    int glo = 7;    // local variable for main function
    cout<<glo<<"\n";    // will print the local value of variable glo
    print();
    // will print the global value of variable glo as there is no local variable glo in function print
    // local variable takes precedence over global variable
    return 0;
}