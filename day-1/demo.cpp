// 1st day prog01
#include<iostream>
using namespace std;

class complex{
	int real , img ; 
	public:
		static int cnt;
	void show(){
		cout<<real<<"+"<<img<<"i"<<endl;
	}	
	complex();
	complex(int,int);
};

complex::complex(int r , int i){
	real = r;
	img = i ;
	cnt++; 
}
int complex::cnt;
complex::complex(){
	int real ,img ;
	cout<<"enter real part:\n";
	cin>>this->real;
	cout<<"enter imaginarypart:\n";
	cin>>this->img;
	cnt++;
}

int main(){
	complex c1(1,3);
	c1.show();
	complex c2;
	c2.show();
	cout<<"Number of object created : "<<complex::cnt<<endl;
	return 0;
}
