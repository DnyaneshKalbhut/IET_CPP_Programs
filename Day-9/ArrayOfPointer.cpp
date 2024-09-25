//Array of pointer to String

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char* str1[5] = {"Ram","Dnyanesh","Divyansh","Raju","Palash"};
	
	for(int i=0; i<5 ; i++){
		cout<<*(str1 + i)<<endl;//  Ram
//		cout<< *(*(str1 + i)+0)<<endl;
	}
	
	for(int i=0; i<5 ; i++){
		for(int j =0 ; j< strlen(str1[i]) ; j++){
			cout<<*(*(str1 + i) + j)<<"|";
		}
		cout<<endl;
	}
}
