#include<iostream>
using namespace std;

class Employee{
	protected :
		int bonus=5000;	
		
};

class WageEmployee:public Employee{
	public:
	int sal;
	
   void CalculateTotalSal(int sal){
   	cout<<"Total salary is = "<<sal+bonus<<endl;
   }
};


int main(){
	WageEmployee e1;
	e1.CalculateTotalSal(24000);
	
}
