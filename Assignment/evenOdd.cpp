#include <iostream>
#include <vector>

using namespace std;

int main() {

   int numbers[10]={1,2,3,4,5,6,7,8,9,10};

    int evenSum = 0;
    int oddSum = 0

    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
