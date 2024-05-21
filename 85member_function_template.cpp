#include<iostream>
using namespace std;

template <class T>
class data{
    T data1;
    public:
        data(T a){
            data1=a;
        }
        void display();
};

template <class T>
void data<T> :: display(){
    cout<<"lmao "<<data1<<endl;
}

int main(){
    data<int> d1(9);
    d1.display();
    data<float> d2(9.8);
    d2.display();
    data<char> d3('c');
    d3.display();
    data<string> d4("nigerundayooooo");
    d4.display();
    return 0;
}