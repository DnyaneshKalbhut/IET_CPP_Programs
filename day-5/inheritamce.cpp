#include <iostream>
using namespace std;

class A{
	private:
		int a = 20;
	protected:
        int b = 30;
	public:
		int c=10;
	
};
class B: protected A{
	protected: int d ;
	// b & c -> protected
    public:
    	int display(){
    		cout<<"printing  protected b in public func"<<endl;
    		return b;
		}
};
int main(){
	B b1;
	//cout<<b1.d<<endl;
	//cout<<b1.a<<endl;
	//cout<<b1.b<<endl;
	//cout<<b1.c<<endl;
	cout<<b1.display()<<endl;
}
