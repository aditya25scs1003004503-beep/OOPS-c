#include<iostream>
using namespace std;
int main()
{
    int sum = 0, n, r;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n > 0) {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    cout << "The sum of the digits is: " << sum;
    return 0;
}