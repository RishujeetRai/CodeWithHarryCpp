#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=1;
    do{     // do-while loop will execute at least once irrespective the condition
        cout<<i<<endl;
        i++;
    }while(i<=n);
}