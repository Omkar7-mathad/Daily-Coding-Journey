// printing the numbers using do while loop//
#include<iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the number:" << endl;
    cin >> n;

    do
    {
        cout << i << " ";  // prints i
        i++;               // increments i
    } while (i <= n);      // checks condition

    cout << endl;
    return 0;
}
