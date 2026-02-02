#include <iostream>
using namespace std;
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "The sum of the digits is: " << sumOfDigits(number) << endl;
    }

    return 0;
}