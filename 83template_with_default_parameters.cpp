#include<iostream>
using namespace std;
template <class T1=int, class T2=float, class T3=char>
class cls{
    T1 data1;
    T2 data2;
    T3 data3;
    public:
        cls(T1 a, T2 b, T3 c){
            data1=a;
            data2=b;
            data3=c;
        }
        void print(){
            cout<<data1<<endl<<data2<<endl<<data3<<endl;
        }
};
int main(){
    cls <>obj1(2,3.3,'a');     // can leave angular brackets empty in case of templates with default parameters
    obj1.print();
    cls <char,char,char>obj2('b','a','c');      // or we can define our own to replace the default ones
    obj2.print();
    cls <char,char>obj3('h','i','o');           // or we can define some and leave others
    // default ones will be invoked in their place
    obj3.print();
    return 0;
}