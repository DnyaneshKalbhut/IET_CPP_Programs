//WRITE A CPP PROGRAM TO SWAP 2 VARIABLES WITHOUT USING 3RD VARIABLE.

#include<iostream>
using namespace std;

// Function to swap two integers using references
void swap(int &a, int &b) {
    a = a+b;
    b = a-b;
    a = a-b;
}

int main() {
    int a,b;
    cout <<"Enter 2 numbers to swap: ";
    cin>>a>>b;
    cout <<"Before swapping a & b: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout <<"After swapping: a & b: "<<a<<" "<<b<<endl;
    return 0;
}

