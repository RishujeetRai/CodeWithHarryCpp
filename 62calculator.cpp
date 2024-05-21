#include<iostream>
#include<cmath>
using namespace std;

class simple_calculator{
    protected:
        float a, b;
    public:
        void get_nums();
        void sum();
        void sub();
        void multiply();
        void divide();
};
void simple_calculator :: get_nums(){
    cout<<"For simple calculator, enter the two nums:\n";
    cin>>a>>b;
}
void simple_calculator :: sum(){
    cout<<"The sum is "<<a+b<<endl;
}
void simple_calculator :: sub(){
    cout<<"The diffrence is "<<a-b<<endl;
}
void simple_calculator :: multiply(){
    cout<<"The product is "<<a*b<<endl;
}
void simple_calculator :: divide(){
    cout<<"The quotient is "<<a/b<<endl;
}

class scientific_Calculator{
    float c, d;
    public:
        void sqrt();
        void square();
        void power();
        void modulo();
};
void scientific_Calculator :: sqrt(){
    cout<<"Enter the number to get it's square root:\n";
    cin>>c;
    cout<<"The square root is "<<pow(c,0.5)<<endl;
}
void scientific_Calculator :: square(){
    cout<<"Enter the number to get it's square:\n";
    cin>>c;
    cout<<"The square root is "<<pow(c,2)<<endl;
}
void scientific_Calculator :: power(){
    cout<<"Enter the number and it's power:\n";
    cin>>c>>d;
    cout<<"The square root is "<<pow(c,d)<<endl;
}
void scientific_Calculator :: modulo(){
    cout<<"Enter the two numbers to perform modulo function:\n";
    cin>>c>>d;
    cout<<"The remainder is "<<(int(c)%int(d))<<endl;
}

class hybrid_Calculator: public simple_calculator, public scientific_Calculator{};

int main(){
    hybrid_Calculator h;
    h.get_nums();
    h.sum();
    h.sub();
    h.multiply();
    h.divide();
    h.sqrt();
    h.square();
    h.power();
    h.modulo();
    return 0;
}