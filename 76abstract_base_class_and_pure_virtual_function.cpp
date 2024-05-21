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
        virtual void display()=0;       // do-nothing function --> pure virtual function
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
    // abstract base class is that base class which is made for the sole purpose that its fns and vars get inherited
    // in case of pure virtual fn, it is created for the sole purpose of rewriting it in derived class
    return 0;
}