#include<iostream>
#include<string>
using namespace std;

class Student{
    int rollNum;
    string name;
    class Address{
        int houseNo;
        string city;
        string district;
        int pinCode;
        public:
            void setAddress(int houseNum, string cityName, string districtName, int PinCode){
                houseNo = houseNum;
                city = cityName;
                district = districtName;
                pinCode = PinCode;
            }
            void displayAddress(){
                cout<<"House Number: "<<houseNo<<endl;
                cout<<"City Name: "<<city<<endl;
                cout<<"District Name: "<<district<<endl;
                cout<<"Pincode: "<<pinCode<<endl;
            }
            // void FromAddress(Student obj){
            //     obj.name = "Boom";           // (i) nested class can access private members of enclosing class
            // }
    };
    // void FromStudent(Address obj){
    //     obj.city = "NotBoom";               // (ii) enclosing class can't access private members of nested class
    // }
    Address add;
    public:
        void setRoll(int num){
            rollNum = num;
        }
        void setName(string Name){
            name = Name;
        }
        void setAdd(int houseNum, string cityName, string districtName, int PinCode){
            add.setAddress(houseNum, cityName, districtName, PinCode);
        }
        void display(){
            cout<<"The boy's details are:"<<endl;
            cout<<"Roll Number: "<<rollNum<<endl;
            cout<<"Name: "<<name<<endl;
            add.displayAddress();
        }
};

int main(){
    // Address add;                 // invalid for making objects of nested classes
    // Student::Address add;        // valid only for public nested classes

    Student st;
    st.setRoll(36);
    st.setName("JOJO");
    st.setAdd(24, "BodhGaya", "Gaya", 824231);
    st.display();

    // also enclosing class can't access the private members of the nested class directly
    // but nested class can have access to the private members of the enclosing class

    return 0;
}

/*
According to IBM.com,
    Member functions of a nested class follow regular access rules,
    and have no special access privileges to members of their enclosing classes.
    Member functions of the enclosing class have no special access to members of a nested class.
*/

/*
(i) was valid even though name is a private member of the enclosing class Student
    and we invoked it from within the nested class Address
Hence, nesting class can access the private members of its enclosing class.

(ii) was not valid because city is a private member of the nesting class Address
    and we invoked it from within the the enclosing class Student
Hence, enclosing class can't acecess the private members of its nested classes.
*/