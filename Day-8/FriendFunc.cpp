#include<iostream>
using namespace std;

class Parent{
	int properties;
	
	protected:
	int fd;
	
	public:
		Parent(){
		cout<< "In parent Constructor"<<endl;
			properties=10;
			fd=20000;
		}
		
		friend void Dost(Parent&); 
};

void Dost(Parent& obj){
	cout<<"my friend parent property is "<<obj.properties<<endl;
    cout<<"my friend parent fd is "<<obj.fd<<endl;
}

int main(){
	Parent obj;
	Dost(obj);
}

