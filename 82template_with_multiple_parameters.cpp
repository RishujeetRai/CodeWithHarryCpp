#include<iostream>
using namespace std;
template <class T1, class T2>
class data{
    T1 data1;
    T2 data2;
    public:
        data(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<data1<<endl<<data2<<endl;;
        }
};
int main(){
    data <int, float>d1(2, 3.4);            // example 1
    d1.display();
    data <char, float>d2('d', 3.4);         // example 2
    d2.display();
    data <int, char>d3(2, 'c');             // example 3
    d3.display();
    return 0;
}