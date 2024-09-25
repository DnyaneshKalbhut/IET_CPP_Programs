// store details of 10 books in an array

#include<iostream>
using namespace std; 

class Book {
	char name[100];
	int price;
	public:
		void getBook(){
			cout<<"Enter a Book name"<<endl;
			cin>>name;
			cout<<"Enter a Book Price"<<endl;
			cin>>price;
		}
		
		void displayBook(){
			cout<<"Book Name is "<<name<<"And Price is: rs "<<price<<endl;
		}
};

int main(){
	int SIZE = 10;
	Book b1[SIZE];
	   for(int i = 0 ; i<SIZE ; i++)
	{
		cout<< "Book "<< i+1<<endl;
		b1[i].getBook();
	}	
		   for(int i = 0 ; i<SIZE ; i++)
	{
		cout<< "Book "<< i+1<<" Details"<<endl;
		b1[i].displayBook();
	}	
	
}
