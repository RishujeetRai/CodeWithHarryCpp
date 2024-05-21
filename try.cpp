#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    try{
        if(a==0){
            throw 'Z';
        }
        if(a<0){
            throw a;
        }
        cout<<a<<" is the number.";
    }
    catch(char){
        cout<<"Zero is the number.";
    }
    catch(int){
        cout<<a<<" is the number.";
    }
    return 0;
}