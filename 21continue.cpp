#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=40; i++){
        if(i==2) continue;     // the program will skip printing 2 when i==2
        cout<<i<<endl;
    }
    // continue statement skips the command of code
    return 0;
}