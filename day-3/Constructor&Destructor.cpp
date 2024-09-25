#include<iostream>
using namespace std;
#include<string.h>

class Employee{
	
     int sal ;
     int len;
//     int* ptr;
     
     public:
     	Employee(  int sal,int len){
     		this->len=len;
     		this->sal=sal;
     		cout << "Constructor is called"<<endl;
		 }
		 
		 ~Employee(){
		 	cout<<"Destructor is called"<<endl;
		 }
};


int main(){
	Employee e1= new Employee(123123,12);
	e1.~Employee();
	}


