// Patterns//
// to print the patterns n=4//
// ABCD
// ABCD
// ABCD
// ABCD
#include<iostream>
using namespace std;
int main()
{
int n=5,i,j;
char ch;
for(i=0;i<n;i++){//outer loop
    ch='A';
    for(j=0;j<n;j++){//inner loop
      cout<<ch;
      ch=ch+1;//char+1
    }
    cout<<endl;
}
return 0;
}