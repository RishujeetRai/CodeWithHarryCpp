#include<iostream>
using namespace std;
template<class T1, class T2>
float fAvg(T1 a, T2 b){
    float c = (a+b)/2.0;
    return c;
}
int main(){
    float avg1 = fAvg(2,3);         // can pass ints as parameters
    cout<<"Niceeeeee\nThe average is "<<avg1<<endl;
    float avg2 = fAvg(2.0,3.0);     // can pass floats as parameters in the same fn
    cout<<"Niceeeeee\nThe average is "<<avg2<<endl;
    return 0;
}