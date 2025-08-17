// Patterns (Triangles)//
// to print the patterns n=4//
// A
// BB
// CCC
// DDDD

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
char ch;
ch=65;
for(i=1;i<=n;i++){//outer loop
    
     for(j=1;j<=i;j++){//inner loop
     cout<< ch;
      
    }
    cout<<endl;
    ch++;
}
return 0;
}