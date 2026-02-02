#include <iostream>
using namespace std;

int main() {
    int n, a = 0, d = 1, next; 
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "First " << n << " terms of the fibonacci sequence: ";
    for(int i = 0; i <= n; i++) {
        if (i <= 1){
            a = i;
        }
        else {
            int next = a + d;
            a = d;
            d = next;
        }   
        cout << next << ", ";
    }
    return 0;
}
