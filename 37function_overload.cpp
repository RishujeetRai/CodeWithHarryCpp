#include<iostream>
using namespace std;

void print(int){
    cout<<"You passed an integer dattebane."<<endl;
}
void print(float){
    cout<<"You passed a floating point number dattebane."<<endl;
}
void print(double){
    cout<<"You passed a double number dattebane."<<endl;
}
void print(long double){
    cout<<"You passed a long double number dattebane."<<endl;
}

int main(){
    print(3);
    print(3.3f);
    print(3.3);
    print(3.3l);
    return 0;
}