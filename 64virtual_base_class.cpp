#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int r){
            roll_number = r;
        }
        void get_roll_number(){
            cout<<"The student's roll number is: "<<roll_number<<endl;
        }
};
class test: virtual public student{     // virtual public or public virtual both are same
    protected:
        float maths;
        float physics;
    public:
        void set_marks(int m1, int m2){
            maths = m1;
            physics = m2;
        }
        void get_marks(){
            cout<<"Marks obatined:"<<endl
                <<"Maths = "<<maths<<endl
                <<"Physics = "<<physics<<endl;
        }
};
class sports: virtual public student{
    protected:
        float score;
    public:
        void set_score(int sc){
            score = sc;
        }
        void get_score(){
            cout<<"The student's score is: "<<score<<endl;
        }
};
class result: public test, public sports{
    protected:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            get_roll_number();
            get_marks();
            get_score();
            cout<<"The student's total score is: "<<total<<endl;
        }
};

int main(){
    result r;
    r.set_roll_number(36);
    r.set_marks(78, 86);
    r.set_score(92);
    r.display();
    return 0;
}