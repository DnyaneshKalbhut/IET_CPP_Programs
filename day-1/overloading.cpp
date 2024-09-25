// function overloading
#include<iostream>
using namespace std;

//int add(int a,int b){
//	return a+b;
//};
//
//int add(int a,int b,int c){
//	return a+b+c;
//}
//
//void sub(int a,int b){
//	cout<<"SUBRACTION OF INPUTED NUMBER IS : "<<a-b;	
//}
//void sub(double a,double b){
//	cout<<"SUBRACTION OF float INPUTED NUMBER IS : "<<a-b;	
//}
//
//
//int main(){
//	int a, b,c;
//	cout<<"enter a,b"<<endl;
//	cin>>a>>b;
//	cout<<"A+B IS: "<<add(a,b)<<endl;
//	cout<<"Enter c: "<<endl;
//	cin>>c;
//	cout<<"A+B+C IS: "<<add(a,b,c)<<endl;
//	sub(5,2);
//	cout<<"\n";
//	sub(30.32,23.30);
//}

class date{
	int dd , mm, yy ;
	public:
	void show(){
		cout<<"DATE IS : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	}
	void accept(int d , int m , int y){
		d = dd;
		m = mm ; 
		y = yy;
	} 
};
int main(){
	date::accept(31,08,2023);
	date::show();
}
