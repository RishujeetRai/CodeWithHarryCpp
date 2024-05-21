#include<iostream>
using namespace std;
// using template, we can define general classes which can be used for variables of different datatypes
// without needing to write differet classes for different variable types
template <class T>          // T can later be defined as any kind of datatype in the main function
class vector{
    public:
        T *arr;             // pointer of type T
        int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d=0;
            for(int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
                // this points to the obj which invoked the fn and v is the passed obj: ex-->v1 and v2 respectively
            }
            return d;
        }
};
int main(){
    vector <int>v1(3);      // mentioning class type (template's feature): T is int here
    v1.arr[0]=3;
    v1.arr[1]=2;
    v1.arr[2]=4;
    vector <int>v2(3);      // mentioning class type (template's feature): T is int here
    v2.arr[0]=5;
    v2.arr[1]=2;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);        // v1 is invoking the fn and v2 has been passed as argument
    cout<<a<<endl;

    vector <float>v3(3);      // mentioning class type (template's feature): T is float here
    v3.arr[0]=3.2;
    v3.arr[1]=2.3;
    v3.arr[2]=4.1;
    vector <float>v4(3);      // mentioning class type (template's feature): T is float here
    v4.arr[0]=5.2;
    v4.arr[1]=2.3;
    v4.arr[2]=1.4;
    float b = v3.dotProduct(v4);        // v3 is invoking the fn and v4 has been passed as argument
    cout<<b<<endl;
    return 0;
}