#include <iostream> 
using namespace std; 
  

#define MAX(a, b) (a > b) ? a : b 

int main() 
{ 
    cout << "Max (100, 1000):"; 
    int a = MAX(100, 1000); 
    cout << a << endl; 
  
    cout << "Max (20, 0):"; 
    int b = MAX(20, 0); 
    cout << b; 
  
    return 0; 
} 
