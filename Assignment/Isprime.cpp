//WRITE A CPP PROGRAM TO DISPLAY 1ST 25 PRIME NUMBER.
 

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
      
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n = 5;

    if (isPrime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}
