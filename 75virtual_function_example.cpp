#include<iostream>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s, float r){         // constructor
            title = s;
            rating = r;
        }
        virtual void display(){         // made this base class fn virtual
            cout<<"Display of base class called."<<endl;
        }
};

class cwhVid: public cwh{
    float vidlen;
    public:
        cwhVid(string s, float r, float vl): cwh(s,r){      // constructor in derived class
            vidlen = vl;
        }
        void display(){
            cout<<"Display of derived class 1 called:\n";
            cout<<"Vid title: "<<title<<endl;
            cout<<"Vid rating: "<<rating<<endl;
            cout<<"Vid length: "<<vidlen<<endl;
        }
};
class cwhText: public cwh{
    int words;
    public:
        cwhText(string s, float r, int wc): cwh(s,r){       // constructor in derived class
            words = wc;
        }
        void display(){
            cout<<"Display of derived class 2 called:\n";
            cout<<"Vid title: "<<title<<endl;
            cout<<"Vid rating: "<<rating<<endl;
            cout<<"Total words: "<<words<<endl;
        }
};

int main(){
    string titleV="Video", titleT="Text";
    float length=5.46, rV=4.89, rT=4.81;
    int words=433;

    cwhVid V(titleV, rV, length);
    // V.display();
    cwhText T(titleT, rT, words);
    // T.display();

    cwh *basePTR[2];  // base class pointer
    basePTR[0]=&V;    // base class pointer basePTR[0] pointing at object V of derived class cwhVid
    basePTR[1]=&T;    // base class pointer basePTR[1] pointing at object T of derived class cwhText
    basePTR[0]->display();
    basePTR[1]->display();
    // base class pointer would've invoked base class fn display even tho it was pointing at derived class object
    // since we declared the base class fn display to be virtual, the derived class display fns were invoked
    // if there was no display fn in either of the derived class, the virtual display fn would've been invoked
    return 0;
}

/*
Rules for virtual functions
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/