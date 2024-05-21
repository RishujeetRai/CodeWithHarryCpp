#include<iostream>
using namespace std;

int fact(int a){
    if(a==0){
        return 1;        // base condition for this recursive function
    }
    else{
        return a*fact(a-1);
    }
}

int main(){
    int a;
    cout<<"Enter a number to get it's factorial: ";
    cin>>a;
    cout<<"Sore no factorial ga: "<<fact(a);
    return 0;
}