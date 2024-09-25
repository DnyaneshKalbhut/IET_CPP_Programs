#include<iostream>
using namespace std;

class Car {
	int wheels;
	public:
	Car(){
		cout<<"I am a Car Constructor"<<endl;
		wheels=4;
	}
	Car(int wheels){
		cout<<"I am a Car para Constructor"<<endl;
		this->wheels=wheels;
	}
	
	void display(){
		cout<<"wheels are "<<wheels;
	}
	
	int Totalparts(){
		return 0;
	}
	

};


class Bmw:public Car{
	int engine;
	int speed;
   	public:
   		Bmw(){
   			cout<<"i am in Bmw Constructor"<<endl;
   			engine=0;
   			speed=0;
		   }
		   
		   Bmw(int wheels,int engine,int speed):Car(wheels){
		   	
		   	this->engine=engine;
		   	this->speed=speed;
		   }
		   void display(){
		   	Car::display();
		   	cout<<engine<<endl;
		   	cout<<speed<<endl;
		   }
		   
		   int Totalparts(){
		   	return engine+speed;
		   }
		   
		 
};

class Audi:public Bmw{
	int doors;
   	public:
   		Audi(){
   			cout<<"i am in Audi Constructor"<<endl;
   		    doors=2;
		   }
		   
		   Audi(int wheels,int engine,int speed,int doors):Bmw(engine,speed,wheels){
		   	 cout<<"i am in Audi Constructor"<<endl;
		   	 this->doors=doors;
		   }
		   
		   int Totalparts(){
		   	return doors;
		   }
		   
		   
		  
};


int main(){
	Audi a1(1,2,3,4);
	a1.display();
}
