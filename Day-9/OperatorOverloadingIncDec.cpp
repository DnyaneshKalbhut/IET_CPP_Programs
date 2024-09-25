#include<iostream>
using namespace std;

class Complex{
	int real; 
	int img;
	
	public:
		Complex(){
		   	 real =0;
			 img=0;
		}
		
		Complex(int real , int img){
			this->real=real;
			this->img=img;
		}
		
	
		
		Complex operator++(){ //pre Inc
			++this->real;
			++this->img;
			return (*this);
		}
			Complex operator++(int){ //post
			Complex temp(*this);
			++this->real;
			++this->img;
			return temp;
		}
		
		Complex operator--(){
			--this->real;
			--this->img;
			return (*this);
		}
		Complex operator--(int){
			Complex temp(*this);
			--this->real;
			--this->img;
			return temp; 
		}
		
			void Display(){
			cout<<real<<"-"<<img<<"i"<<endl;
		}
		
};

int main(){
	Complex c1(1,2);
	Complex c2=--c1;
	c1.Display();
	c2.Display();
}
