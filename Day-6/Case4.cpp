#include<iostream>
using namespace std;

//CASE 1
class Age{
	int age;
	
	public:
		Age(int a){
			cout<<"in default Constructor "<<endl;
			cout<<a<<endl;
		}
		
};

class Age2:public Age{
	int age2;
	
	public:
		Age2(int p , int q):Age(p){//base class initialisation list
			cout<<"in derived constructor"<<endl;
			cout<<q<<endl;
		}
		
};



int main(){
	Age2 a1(10,20);
	
	}


