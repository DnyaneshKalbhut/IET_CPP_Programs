#include<iostream>
#include<string.h>
using namespace std;

class Str1{
	char * ptr;
	int len ;
	
	public :
		Str1(){
			len=1;
			ptr= new char[len];
			*ptr='A';
		}
		Str1(char *ch){
			len = 5;
			ptr = new char[len+1];
			strcpy(ptr,ch);
		}
		Str1(int len){
			this->len = len;
			ptr = new char[len+1];
			
            cout<<"accept string\n";
			cin>>ptr;
			
		}
		
		Str1(char  sptr , int len){
			this->len=len;
			ptr= new char[len+1];
			int i ;
	        for(i =0 ; i <len ; i++){
			ptr[i]=sptr;
			}
			ptr[i]='\0';
		}
		
		void charDisplay(){
			cout<<*ptr<<endl;
		}
		void strDisplay(){
			cout<<ptr<<endl;
		}
};


int main(){
//	Str1 s1;
//	s1.charDisplay();
//	Str1 s2("rahul");
//	s2.strDisplay();
//	
	Str1 s3('*',60);
	s3.strDisplay();
	
	Str1 s4(5);
		s4.strDisplay();
}
