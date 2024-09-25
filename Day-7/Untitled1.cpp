#include<iostream>
using namespace std;

int sum(int a,int b){
	int sum = a+b;
	return sum;
}

int main(){
	int a,b;	
	cout<<"Enter a number 1 :"<<endl;
	cin>>a;
	cout<<"Enter a number 2 :"<<endl;
	cin>>b;
	//sum(a,b);
	cout<<"Sum of values : "<<sum(a,b)<<endl;
}
