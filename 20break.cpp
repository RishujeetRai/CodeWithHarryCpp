#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=40; i++){
        if(i==3) break;     // the program will break out of this loop once i==3
        cout<<i<<endl;
    }
    return 0;
}