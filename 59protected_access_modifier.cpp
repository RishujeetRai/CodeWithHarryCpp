#include<iostream>
using namespace std;

class base{
	protected:
		int a=1;
	private:
		int b=2;
	public:
		int c=3;
};

/*
. 						Public Derivation      	Private Derivation    	Protected Derivation
1. Private members    	Not Inherited           Not Inherited           Not Inherited              
2. Protected members   	Protected               Private                 Protected                    
3. Public members    	Public					Private         		Protected               
*/

class derived : public base{
	// because of public derivation
	// a was protected so it is derived as a protected member
	// b was private so it is not derived
	// c was public so it is derived as a public member
	// derived class can use the protected members of the base class and it's own
	// but main fn can't use the protected members
	protected:
		void getdata1(){
			cout<<a<<endl;
		}
	public:
	void getdata2(){
		cout<<a<<endl;		// a can be used by the derived class as it is a protected member of the base class
		// so a is also derived as a protected member under public derivation

		// cout<<b<<endl;	// b can't be used by the derived class as it is a private member of the base class
		// so b was not derived

		cout<<c<<endl;		// c can be used by the derived class as it is a public member of the base class
		// so a is also derived as a public member under public derivation
	}
};

int main(){
	derived d;
	// d.getdata1();	//	can't be used by the main fn as it is a protected member
	d.getdata2();
	return 0;
}