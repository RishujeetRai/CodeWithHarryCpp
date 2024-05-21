#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {93, 2, 34, 55, 42, 12, 19, 13, 24, 32};
    sort(arr, arr+5);       // to sort elements from first position to fifth position
    sort(arr, arr+10, greater<int>());      // to sort in decreasing order
    for(int i=0; i<10; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}