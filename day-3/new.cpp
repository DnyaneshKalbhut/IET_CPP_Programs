// new()
#include<iostream>
using namespace std;



int main(){
	
	int * p = new int(28);
	cout<<"int is : "<<*p<<endl;
	
	char * c = new char('v');
	cout<<"character is : "<<*c<<endl;
	
	float * f  = new float(21.07f);
	cout<<"float value is : "<<*f<<endl;
	
	delete p;
	delete q;
	delete r;
	
	
}

