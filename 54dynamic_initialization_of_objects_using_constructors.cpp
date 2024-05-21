#include<iostream>
using namespace std;

class deposit{
    int principal;
    float rateOfInterest;
    int years;
    float resultSum;
    public:
        deposit(){}     // constructor without arguments which does nothing
        // this default constructor is crucial for the dynamic initialization of objects
        // so compiler doesn't throw error when we make objects without arguments
        // the objects made will be given arguments later on: dynamically

        deposit(int p, float r, int y);
        deposit(int p, int R, int y);

        void show(){
            cout<<"The result sum for Rs "<<principal<<", "<<rateOfInterest<<" interest and "<<years<<" years is: "<<resultSum<<endl;
        }
};

deposit :: deposit(int p, float r, int y){
    principal = p;
    rateOfInterest = r;
    years = y;
    resultSum = principal;
    for(int i=0; i<y; i++){
        resultSum = resultSum * (1+rateOfInterest);
    }
}

deposit :: deposit(int p, int R, int y){
    principal = p;
    rateOfInterest = float(R)/100;
    years = y;
    resultSum = principal;
    for(int i=0; i<y; i++){
        resultSum = resultSum * (1+rateOfInterest);
    }
}

int main(){
    deposit d1, d2, d3;
    int p, y, R;
    float r;

    // d3.show();

    cout<<"Enter principal, float rate of interest and years:\n";
    cin>>p>>r>>y;
    d1 = deposit(p, r, y);          // explicit declaration
    d1.show();

    cout<<"Enter principal, integer rate of interest and years:\n";
    cin>>p>>R>>y;
    d2 = deposit(p, R, y);          // explicit declaration
    d2.show();

    return 0;
}