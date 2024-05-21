#include<iostream>
using namespace std;

class student{
    private:
        int roll_number;
    public:
        void set_roll_number(int);
        int get_roll_number();
};
void student :: set_roll_number(int n){
    roll_number = n;
}
int student :: get_roll_number(){
    cout<<"The roll number of the student is "<<roll_number<<endl;
}

class exam : public student{
    protected:
        float maths;
        float science;
    public:
        void set_marks(float, float);
        void get_marks();
};
void exam :: set_marks(float m1, float m2){
    maths = m1;
    science = m2;
}
void exam :: get_marks(){
    cout<<"Marks obtained in maths: "<<maths<<endl;
    cout<<"Marks obtained in science: "<<science<<endl;
}

class result : public exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            percentage = (maths+science)/2;
            cout<<"The percentage obtained is "<<percentage<<endl;
        }
};

int main(){
    result r;
    r.set_roll_number(36);
    r.set_marks(98, 97);
    r.display_result();
    return 0;
}