#include<iostream>
using namespace std;


template <class T>
T add(T &a, T &b)
{
	T result = a + b;
	return result;
}


int main (){
	float i = 10;
	float j = 20;
	float result = add(i,j);
	cout<<result;
}
