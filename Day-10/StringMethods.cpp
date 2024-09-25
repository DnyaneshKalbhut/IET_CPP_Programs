#include<iostream>
using namespace std;
int ustrLen(char*);
int ustrLen(char* sptr){
	
	int len = 0;
	while(*sptr!='\0'){
		len++;
		sptr++;
	}
	return len;
} 

 void ustrcpy(char* ch1 , char* ch2){
 	
	 while(*ch2!='\0'){
	    *ch1=*ch2;
	    ch2++;
	    ch1++;
	 }
	 *ch1='\0';
 }

void ustrcat(char* s1 , char* s2){
	
	while(*s1!='\0'){
		s1++;
	}
	while(*s2!='\0'){
	*s1=*s2;
	s1++;
	s2++;
	}
	*s1='\0';
}

void revstr(char* s){
	char* ch; 
	for(int i=ustrLen(s); i>=0 ; i-- ){
		ch[i]=s[i];
	}
}

int main(){

  char ch[10],ch1[10] ;
  	cout<<"enter a string 1"<<endl;
  	cin>>ch;  	
//  	  	cout<<"enter a string 2"<<endl;
//  	   cin>>ch1;  	
//  	int len = ustrLen(ch);
//    cout<<len;
//       ustrcpy(ch1,ch);
     
//        ustrcat(ch,ch1);
     
       revstr(ch);
       cout<<ch;
        
}
