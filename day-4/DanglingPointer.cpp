#include <iostream>
using namespace std;
#include <string.h>

class Str1{
	char * ptr;
	int len;
	
	public:
	Str1(char * sptr ,int len  ){
		this->len = len;
		ptr = new char[len+1];
		strcpy(ptr,sptr);
	}
	void Display(){
		cout<<"LEN IS-> "<<len<<endl;
		cout<<"PTR is-> "<<ptr<<endl;
	}
	~Str1(){
		cout<<"Destructor is called"<<endl;
	if(ptr){
		delete ptr;
		ptr=NULL;
	}
	}
	
	Str1(Str1 & snew){
		this->len=len;
		ptr = new char[len+1];
		strcpy(ptr,snew.ptr);
	}
};


int main(){
	Str1 s1("Rahul",5);
	
	{
			Str1 s2(s1);
        	s2.Display();
        	s2.~Str1();//error
	}
        s1.Display();
}
