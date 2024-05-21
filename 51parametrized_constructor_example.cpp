#include<iostream>
#include<cmath>
using namespace std;
// constrcutor has same name as its class
// so if we define a fn inside a class with the same name as of the class
// and without a return type
// that fn will become a constructor

class point{
    int x, y;
    static int a;               // creating a static integer
    public:     // as constructors must always be declared under the public section
        point(int a, int b){    // this fn is a constructor as it has the same name as of it's class
        // and no return type   // and it's a parametrized constructor
            x = a;
            y = b;
        }
        void disp(){
            cout<<"The point p"<<a<<" is: ("<<x<<","<<y<<")"<<endl;
            a++;
        }
        friend void distance(point p1, point p2);
};
int point :: a = 1;             // initializing the static integer
void distance(point p1, point p2){
    int X, Y, D;
    X = pow((p1.x-p2.x),2);
    Y = pow((p1.y-p2.y),2);
    D = pow((X+Y),(0.5));
    cout<<"And the integer distance between them is: "<<D;
}

int main(){
    point p1(3,2), p2(9,7);
    p1.disp(), p2.disp();
    distance(p1,p2);
    return 0;
}