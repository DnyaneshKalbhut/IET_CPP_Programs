#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n =5;
  int * ptr = (int*) malloc(n * sizeof(int));
//	int* ptr = void* malloc(n * sizeof(int));//it will not work
	
	cout<<"Enter 5 number"<<endl;
	for(int i = 0 ; i<5 ; i++){
		cin>>ptr[i];
	}
		for(int i = 0 ; i<5 ; i++){
		cout<<ptr[i];
	}
	free(ptr);
}
