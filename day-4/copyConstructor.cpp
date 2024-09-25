#include<iostream>
using namespace std;

class A{
	int a , b ; 
	public: 
	A(int a , int b){
		this->a=a;
		this->b=b;
	}
	void show(){
		cout<<a<<" "<<b<<endl;
	}
}; 

int main(){
	A a1(5,6);
	a1.show();
	A a2(a1);
	a2.show();
}
