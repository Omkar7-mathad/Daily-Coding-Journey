// Patterns (Triangles)//
// to print the patterns n=4//
// 1111
//  222
//   33
//    4

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
for(i=1;i<=n;i++){
    //spaces
  for(j=1;j<=i;j++){//inner loop
        cout<<" ";
      }
    //   nums
    for(j=1;j<=(n-i+1);j++){
        cout<<i;
    }
    cout<<endl;
   
}
return 0;
}

