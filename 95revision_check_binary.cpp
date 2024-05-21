#include<iostream>
#include<string>
using namespace std;

class Binary{
    private:
        string s;
    public:
        void getBinary(){
            cout<<"Enter the binary number: ";
            cin>>s;
            checkBinary();
        };
        void checkBinary();
        void onesComplement();
};

void Binary :: checkBinary(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid binary number.";
            exit(0);
        }
    }
}

void Binary :: onesComplement(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    cout<<s;
}

int main(){
    Binary b;
    b.getBinary();
    // b.checkBinary();
    b.onesComplement();
    return 0;
}