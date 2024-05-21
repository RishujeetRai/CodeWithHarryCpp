#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
        void check();       // is a private function
    public:
        string s;
        void getS();        // are public functions
        void rev();
        void display();
};

void binary :: getS(){
    cout<<"Enter a binary number: ";
    cin>>s;
    check();        // this private function can be used from here
    // validity of entered binary number will be checked in this same function
    // didn't even need to mention the object here
    // this is called nesting of member functions
}
void binary :: check(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary number entered.\n";
            exit(0);
        }
    }
    cout<<"Valid binary number entered.\n";
}
void binary :: rev(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary :: display(){
    cout<<"It's one's compliment is: ";
    // for (int i=0; i<s.length(); i++){
    //     cout<<s.at(i);
    // }
    cout<<s;
    cout<<endl;
}

int main(){
    binary num;     // binary is class and num is an object
    num.getS();
    // num.check();     // private function is inaccesible from here
    num.rev();
    num.display();
    return 0;
}