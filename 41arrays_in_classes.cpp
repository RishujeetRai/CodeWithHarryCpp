#include<iostream>
using namespace std;

class school{
    int roll[100], rank[100], counter;
    public:
        void initCount(){
            counter=0;
        }
        void setData();
        void dispData();
};
void school :: setData(){
    cout<<"Enter the roll number for student "<<counter+1<<": ";
    cin>>roll[counter];
    cout<<"Enter the rank for student "<<counter+1<<": ";
    cin>>rank[counter];
    counter++;
}
void school :: dispData(){
    for(int i=0; i<counter; i++){
    cout<<"The rank for roll number "<<roll[i]<<" is: "<<rank[i]<<endl;
    }
}

int main(){
    school MyHero;
    MyHero.initCount();
    MyHero.setData();
    MyHero.setData();
    MyHero.setData();
    MyHero.dispData();
    return 0;
}