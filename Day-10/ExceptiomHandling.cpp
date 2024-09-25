#include<iostream>
using namespace std;


int main(){
	int a = 5;
	int b = 0;
	int result;
	
	try{
	if(b==0){
		throw b;
	}
	result = a/b;
	
}catch(int b){
	cout<<"Cant get divisible by "<<b<<endl;
}
 cout << "Division Result is: " << result; 
}
