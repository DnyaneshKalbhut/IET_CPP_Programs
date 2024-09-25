//WRITE A CPP PROGRAM TO DISPLAY FACTORIAL FROM NUMBER 5 TO 8.
#include <iostream>
using namespace std;

int factorial(int num){
	if(num<0){
		return 1;
	}
	int result=1;
	for(int i = 2 ; i<= num ; ++i){
		result=result*i;
	}
	return result;
}

int main() {
   
  for(int i=5; i<=8 ; ++i){
  	cout<<"factorial of "<<i<<" is "<<factorial(i)<<endl;
  }

    return 0;
}
