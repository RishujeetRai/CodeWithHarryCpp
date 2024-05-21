#include<iostream>
using namespace std;
int main(){
    int scienceMarks[] = {44, 45, 46 , 48};
    int *ptr = scienceMarks;        // scienceMarks == &scienceMarks[i]
    cout<<"The science marks are:"<<endl;
    cout<<*(ptr)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
    // if ptr points to first element of an array, ptr+1 points to the second, and so on
    // also, if ptr=32 is an integer pointer, then, ptr+1=32+4=36, as sizeof(int)=4
    // sore ga pointer arithmetic: address(new) = address(current) + (i*sizeof(datatype))
    return 0;
}