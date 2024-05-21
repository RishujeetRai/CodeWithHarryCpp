#include<iostream>
#include<cmath>
using namespace std;

class simpleC{
    float a, b;
    public:
        void get_data_simple(){
            cout<<"Enter the value of a and b:\n";
            cin>>a>>b;
        }
        void performOps_simple(){
            cout<<"The value of a+b is "<<a+b<<endl;
            cout<<"The value of a-b is "<<a-b<<endl;
            cout<<"The value of a*b is "<<a*b<<endl;
            cout<<"The value of a/b is "<<a/b<<endl;
        }
};
class scientificC{
    float a, b;
    public:
        void get_data_scientific(){
            cout<<"Enter the value of a and b:\n";
            cin>>a>>b;
        }
        void performOps_scientific(){
            cout<<"The value of cos(a) is "<<cos(a)<<endl;
            cout<<"The value of cos(b) is "<<cos(b)<<endl;
            cout<<"The value of sin(a) is "<<sin(a)<<endl;
            cout<<"The value of sin(b) is "<<sin(b)<<endl;
        }
};

class hybridC: public simpleC, public scientificC{};

int main(){
    hybridC h;
    h.get_data_simple();
    h.performOps_simple();
    h.get_data_scientific();
    h.performOps_scientific();
    return 0;
}