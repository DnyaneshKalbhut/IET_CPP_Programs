#include<iostream>
using namespace std;
#include<string.h>
int main(){
//	char str[20];
//	cout<<"Enter a string"<<endl;
//	cin>>str;
//	cout<<str<<endl;
//	cout<<strlen(str)<<endl;
//	cout<<sizeof(str);
	
	char *str;
	int n ; 
	cout<<"Enter number of characters: "<<endl;
	cin>>n;
	str = new char[n+1];
	cout<<"enter string: "<<endl;
	cin>>str;
	cout<<"String is : "<<str<<endl;
	
		
}
