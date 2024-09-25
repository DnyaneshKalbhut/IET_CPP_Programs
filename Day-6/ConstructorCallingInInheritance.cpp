#include<iostream>
using namespace std;

//CASE 1
class Age{
	int age;
	
	public:
		Age(){
			cout<<"in default Constructor "<<endl;
			age=10;
		}
		
		void Display(){
			cout<<age<<endl;
		}
};

class Age2:public Age{
	int age2;
	
	public:
		Age2(){
			cout<<"in derived constructor"<<endl;
			age2=20;
		}
		void Display(){
			Age::Display();
			cout<<age2<<endl;
		}
};



int main(){
	Age2 a1;
	a1.Display();
	}


