#include <iostream>
using namespace std;
class A{
	  int * ptr;
	  public: 
	   A(){
	   	this->ptr = new int;
		*ptr = 20;  
		cout <<"constructor is called"<<endl;
	   }
	   
	   void display(){
	   	cout<<*ptr<<endl;
	   }
	   ~A(){
	   	cout<<"Destructor is called "<<endl;
	   	delete ptr;
	   	ptr=NULL;
	   }
};

int main(){
	A a1;
	a1.display();
	a1.~A();
	A a2;
	a2.display();	
}
