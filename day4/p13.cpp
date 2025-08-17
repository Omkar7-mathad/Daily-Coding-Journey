// Patterns (Triangles)//
// to print the patterns n=4//
// A
// BC
// DEF
// GHIJ

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
char ch='A';
for(i=1;i<=n;i++){//outer loop
    
     for(j=1;j<=i;j++){//inner loop
        cout<< ch<<" ";
        ch++;
      }
    cout<<endl;
   
}
return 0;
}

