#include<iostream>
using namespace std ; 

class A{
	int size ; 
	int * ptr ; 
	
	public: 
	A(){
		cin>>size;
		ptr = new int[size];
	}
	void get(){
		cout<<"ENter values: ";
		for(int i = 0 ; i<size ; i++){	    
				cin>>ptr[i];	
		}
	}
	void show(){
		for(int i = 0 ; i<size ; i++){
				cout<<ptr[i]<<" "<<endl;	
		}
		
	}
	
	int max(){
		int m;
		m = ptr[0];
		for(int i=1;i<+size;i++){
			if(ptr[i]>m){
				m=ptr[i];
			}
		}
		return m;
	}
	int min(){
		int m;
		m = ptr[0];
		for(int i=1;i<+size;i++){
			if(ptr[i]<m){
				m=ptr[i];
			}
		}
		return m;
	}
};

int main(){
	A a1;
	a1.get();
	a1.show();
	cout<<"max is : "<<a1.max()<<endl;
	cout<<"min is : "<<a1.min()<<endl;
}
