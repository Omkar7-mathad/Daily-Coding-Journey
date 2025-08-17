// Patterns//
// to print the patterns n=4//
// 1234
// 1234
// 1234
// 1234
#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
for(i=1;i<=n;i++){//outer loop
    for(j=1;j<=n;j++){//inner loop

        cout<<j<<" ";

    }
    cout<<endl;
}
return 0;
}