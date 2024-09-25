#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;  // Store the original number
    int reversedNum = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int a;
    cout << "Enter a number to check if it is a palindrome or not: ";
    cin >> a;

    if (isPalindrome(a)) {
        cout << "It is a Palindrome number" << endl;
    } else {
        cout << "It is not a Palindrome number" << endl;
    }
    return 0;
}

