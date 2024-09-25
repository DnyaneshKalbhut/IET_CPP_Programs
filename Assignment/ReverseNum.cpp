#include <iostream>
using namespace std;


int reversenum(int &num) {
    
    int reversedNum = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }
    return reversedNum;
}

int main(){
  int num;
  cout<<"enter a number to reverse"<<endl;
  cin>>num;
  
  cout<<reversenum(num);
}
