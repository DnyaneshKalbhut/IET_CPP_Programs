#include<iostream>
using namespace std;
class B;
class A{
	int x;
	
	public:
		void setdata(int i){
			x=i;
		}
		
		friend void min(A a, B b);
};

class B{
	int y;
	
	public:
		void setdata(int i){
			y=i;
		}
		
		friend void min(A ,B );
};

void min(A a , B b){
	if(a.x<=b.y){
		cout<<"a is smaller than b "<<endl;
	}else{
		cout<<"b is smaller than a"<<endl;
	}
}


int main(){
	A a;
	B b;
	a.setdata(10);
	b.setdata(20);
	
	min(a,b);
}
