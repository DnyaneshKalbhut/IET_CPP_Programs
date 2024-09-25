#include<iostream>
using namespace std;

namespace firstSpace{
	void func(){
		cout<<"into first namespace"<<endl;
	}
}

namespace secondSpace{
	void func(){
		cout<<"into second namespace"<<endl;
	}
}


namespace FirstNameSpace{
	void display(){
			cout<<"into first namespace"<<endl;
	}
	
	namespace SecondNameSpace{
		void display(){
			cout<<"into second namespace"<<endl;
	}	
	}
}


using namespace FirstNameSpace::SecondNameSpace; // because of this statement

int main(){
//	firstSpace::func();
//	secondSpace::func();
    
    display();//it will display second namespace

}
