#include<iostream>
using namespace std;
class stu{
	int rl;
	string name;
	public:
	void get(){
		rl=20;
		name="aadi";
		cout<<rl<<name;
	}
};
int main(){
	stu s1;
	s1.get();
	
}
