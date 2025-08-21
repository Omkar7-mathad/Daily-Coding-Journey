// WAF to print nth fibonacci
#include <iostream>
using namespace std;

// Function to get nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) return 0;   // 0th Fibonacci
    if (n == 1) return 1;   // 1st Fibonacci

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
