// Patterns (Triangles)//
// to print the patterns n=4//
// AAAA
//  BBB
//   CC
//    D

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
char ch='A';
for(i=1;i<=n;i++){
    //spaces
  for(j=1;j<=i;j++){//inner loop
        cout<<" ";
      }
    //   nums
    for(j=1;j<=(n-i+1);j++){
        cout<<ch;
        
    }
    cout<<endl;
   ch++;
}
return 0;
}

