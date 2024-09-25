#include<iostream>
using namespace std;

class Base;

class Student{	
public:
	void display(Base& obj);
};
class Base{
	int marks;
	protected:
		int rollno;
		
		public:
			Base(){
				marks=69;
				rollno=25;
			}
			friend void Student::display(Base& obj);
};

void Student::display(Base& obj){
	cout<<"the marks are:"<<obj.marks<<endl;
	cout<<"roll no:"<<obj.rollno<<endl;
}

int main(){
	Base obj;
	Student s1;
	s1.display(obj);
}
