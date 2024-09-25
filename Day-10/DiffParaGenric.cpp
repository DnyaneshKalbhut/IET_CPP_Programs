#include<iostream>
using namespace std;


template <class X , class Y>
void addition(X a, Y b)
{
  X result = a + b;
	cout<<result;
}


int main (){
	addition(2,2.5);
}
