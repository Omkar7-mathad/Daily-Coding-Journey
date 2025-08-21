// to calculate the n factorial//
#include<iostream>
using namespace std;

int factorialN(int n){   // should return int, not void
    int fact = 1;
    for(int i = 1; i <= n; i++){  // include n also
        fact*= i;
    }
    return fact;
}

int main(){
    cout << factorialN(4) << endl;   
    cout << factorialN(5) << endl;  
    return 0;
}
