#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an integer from 1 to 4: ";
    cin>>a;
    switch(a){
        case 1: cout<<"One desu yo.";
        break;
        case 2: cout<<"Two desu yo.";
        break;
        case 3: cout<<"Three desu yo.";
        break;
        case 4: cout<<"Four desu yo.";
        break;
        default: cout<<"Invalid integer entered.";
    }
}