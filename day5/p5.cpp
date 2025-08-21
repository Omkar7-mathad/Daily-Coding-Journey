// calculate the sum of numbers from 1 to n
#include<iostream>
using namespace std;

int sumN(int n){   // should return int, not void
    int sum = 0;
    for(int i = 1; i <= n; i++){  // include n also
        sum += i;
    }
    return sum;
}

int main(){
    cout << sumN(5) << endl;   // Output: 15
    cout << sumN(10) << endl;  // Output: 55
    return 0;
}
