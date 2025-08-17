// Patterns (Triangles)//
// to print the patterns n=4//
// 1
// 12
// 123
// 1234

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
for(i=1;i<=n;i++){//outer loop
    
     for(j=1;j<=i;j++){//inner loop
     cout<< j;//write J instead of i
    
    }
    cout<<endl;
    
}
return 0;
}