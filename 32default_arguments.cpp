#include<iostream>
using namespace std;

int SI(int money, float rate=1.04){     // rate will work as default argument in this fn
    return (money*rate)/100;
}
// For default arguments of a fn, we don't have to pass values for that argument.
// We can pass still different values than the default, the default argument gets overwritten in that case.
// Default arguments must always be mentioned in the end, i.e., after the general arguments.

int main(){
    int money = 100000;
    float rateSpecialCases=1.08;
    cout<<"If you have Rs."<<money<<". You'll get an SI of Rs."<<SI(money)<<" in a year."<<endl;
    // Don't have to pass values for rate as the fn will take the default ones automatically.
    cout<<"Mr.Special Case, you have Rs."<<money<<". So you'll get an SI of Rs."<<SI(money, rateSpecialCases)<<" in a year."<<endl;
    // rateSpecialCase is passed to be used instead of the default argument.
    return 0;
}