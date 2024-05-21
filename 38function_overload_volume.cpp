#include<iostream>
using namespace std;

int volume(int a){
    return a*a*a;
}
float volume(int r, int h){
    return 3.14*r*r*h;
}
int volume(int l, int b, int h){
    return l*b*h;
}

int main(){
    cout<<"The volume of cube with side 4 is: "<<volume(4)<<endl;
    cout<<"The volume of cylinder with radius 3 and height 8 is: "<<volume(3,8)<<endl;
    cout<<"The volume of cuboid with sides 4, 3 and 7 is: "<<volume(4,3,7)<<endl;
    return 0;
}