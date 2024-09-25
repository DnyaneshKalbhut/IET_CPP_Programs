#include<iostream>
using namespace std;

class Complex{
	int real;
	int img;
	
	public:
		Complex(){
//			cout<<"this is defalut constructor"<<endl;
				real = 0;
				img = 1;
		}
		
		Complex(int r , int i){
//			cout<<"this is para constructor"<<endl;
			real=r;   
			img=i;
			
		}
		Complex operator+(Complex& cnew){
			Complex temp;
			temp.real=this->real+ cnew.real;
			temp.img=img+cnew.img;
			return temp;
		}
		Complex operator-(Complex& c){
			Complex temp;
			temp.real = real - c.real;
			temp.img= img - c.img;
			return temp;
		}
		
		void Display(){
		if(img<0){
			cout<<real<<img<<"i"<<endl;
		}else{
		
			cout<<real<<"+"<<img<<"i"<<endl;
	}
		}
};


int main(){

	Complex c1(2,5);
	Complex c2(3,6);
	Complex c3=c1+c2;
	Complex c4=c1-c2;//c1.operator+(c2)
	c3.Display();
	c4.Display();
}
