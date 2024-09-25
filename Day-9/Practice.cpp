//#include<iostream>
//using namespace std;
//class complex
//{
//	int real,img;
//	public:static const int cnt;
//	private:static const int cnt1;
//	public:
//		complex()
//		{
//			cout<<"default is invoked\n";
//			real=5;
//			img=5;
//		//	cnt++;//not allowed
//		}
//		static int getcnt()
//		{
//			return cnt1;
//		}
//};
//const int complex::cnt=5;//memory alloaction takes place
//const int complex::cnt1=10;
//int main()
//{
//	complex c1;
//	cout<<"no of obj created is   "<<complex::getcnt();
//	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
//	cout<<complex::cnt;
//	//cout<<complex::cnt1;
//
//}
//
//#include <iostream>
//using namespace std;
//
//class Test
//{
//	static int x;
//public:
//	Test() {
//	 x++;
//	  }
//	static int getX() {
//	return x;
//	}
//};
//int Test::x=1;
//int main()
//{
//	cout << Test::getX() << " ";
//}

#include <iostream>
using namespace std;
 
class Player
{
private:
    int id;
    static int next_id;//1
public:
    int getID() {
	 return id; 
	 }
    Player()  { 
	 id = next_id++;
	  }
};
int Player::next_id = 0;
 
int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.getID() << " ";
  cout << p2.getID() << " ";
  cout << p3.getID();
  return 0;
}
