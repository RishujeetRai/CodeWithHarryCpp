#include<iostream>
using namespace std;
int main(){
    int mathsMarks[4];      // had to define array size inside the square brackets
    mathsMarks[0] = 56;
    mathsMarks[1] = 54;
    mathsMarks[2] = 58;
    mathsMarks[3] = 57;
    cout<<"The maths marks are:"<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;

    int scienceMarks[] = {44, 45, 46 , 48};
    // size is defined on the basis of the number of values in the curly brackets
    cout<<"The science marks are:"<<endl;
    cout<<scienceMarks[0]<<endl;
    cout<<scienceMarks[1]<<endl;
    scienceMarks[2] = 47;       // values at any position in an array can be changed
    cout<<scienceMarks[2]<<endl;
    cout<<scienceMarks[3]<<endl;

    cout<<"The english marks are:"<<endl;
    int n=4;
    int englishMarks[n] = {};   // its an empty array with n 0 values
    for(int i=0; i<n; i++){
        cout<<englishMarks[i]<<endl;    // will print 0 n=4 times
        // in case loop runs for i=5 also, 5th value would be garbage or meaningless as array size was of n=4
    }
    return 0;
}