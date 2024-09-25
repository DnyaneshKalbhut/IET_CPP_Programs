#include<iostream>
using namespace std;


class Complex{
	int img;
	int real;
	
	public:
		Complex(){
			img=real=0;
		}
		
		Complex(int img , int real){
			this->img=img;
			this->real=real;
		}
		
		Display(){
			if(img>0){
				cout<<real<<"+"<<img<<"i"<<endl;
			}else{
				cout<<real<<img<<"i"<<endl;
			}
		}
		
		Complex operator+(Complex& c){
			Complex temp;
			temp.real=this->real+c.real;
			temp.img=this->img+c.img;
			return temp;
		}
			Complex operator-(Complex& c){
			Complex temp;
			temp.real=this->real-c.real;
			temp.img=this->img-c.img;
                return temp;
						}
};


int main (){
	Complex c1(7,8);
	Complex c2(2,4);
	Complex c3;
	c3=c1+c2; //c1.operator-(c2);
	c3.Display();
}
