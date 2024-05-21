#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n to get it's multiplication table: ";
    cin>>n;
    int i=1;
    do{
        cout<<n<<"X"<<i<<"="<<(n*i)<<endl;
        i++;
    }while(i<=10);
}