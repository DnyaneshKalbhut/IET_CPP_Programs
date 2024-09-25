#include<iostream>
using namespace std;
class A{
	int age ;
	int rollno;
public:	
	
	A(){    //Default constructor
		age=10;
		rollno=18;
		cout<<"Default constructor is called"<<endl;
	}
	
	A(int age, int rollno){
		this->age=age;
		this->rollno=rollno;
			cout<<"parameterised constructor is called"<<endl;
	}
	~A(){
		cout<<"destructor is called"<<endl;
		
	}
	
};
int main(){
	A a1;
	A a2(12,21);
	a1.~A();
}
