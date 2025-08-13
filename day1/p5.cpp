// to check given number is prime or not //
#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true; 

    cout << "Enter the number to check: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = false;
                break; 
            }
        }
    }

    if (isPrime)
        cout << "It is a prime number" << endl;
    else
        cout << "It is not a prime number" << endl;

    return 0;
}
