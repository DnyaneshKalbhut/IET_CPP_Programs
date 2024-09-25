#include <iostream>

using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;


    if (number == 0) {
        cout << "Number of digits: 1" << endl;
        return 0;
    }

    int digitCount = 0;
    while (number > 0) {
        number /= 10; 
        digitCount++; 
    }

    cout << "Number of digits: " << digitCount << endl;

    return 0;
}

