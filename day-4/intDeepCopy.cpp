#include <iostream>
using namespace std;

class Box{
	int h , l ; 
	int *b; 
	
	public: 
	void display(){
		cout<<h<<" "<<l<<" "<<b<<endl;
	}
	Box(){
		  b = new int;
	}
	void setBox(int h , int br , int l ){
		this->h=h;
		this->l=l;
		*b = br;
	}
	  // Parameterized Constructors for
    // for implementing deep copy
	Box(Box & inew){
		this->h=h;
		this->l=l;
		this->b = new int;
		*b = *(inew.b);
	}
	~Box(){
		cout<<"Destructor is called"<<endl;
		delete b;	
	}
};

  int main(){
  	Box b1;
  }
