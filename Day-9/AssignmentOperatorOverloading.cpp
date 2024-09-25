#include<iostream>
#include<string.h>
using namespace std;

class Str{
 int len;
 char* ptr;
 
 public:
 	
	 Str(char* sptr){
	 	len=strlen(sptr);
	 	ptr= new char[len+1];
	 	strcpy(ptr,sptr);
	 }
	 
	 Str& operator=(Str& s){
	 	len=s.len;
	 	delete[] ptr;
	 	ptr = new char[len+1];
	 	strcpy(ptr,s.ptr);
	 	return (*this);
	 }
	 
	 void Display(){
 		cout<<len<<endl;
 		cout<<ptr<<endl;
	 }
 
     
};


int main(){
	Str s1("hello");
	Str s2("Hii");
	s2=s1;
	s1.Display();
	s2.Display();
}
