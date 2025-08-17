// Patterns (Triangles)//
// to print the patterns n=4//
// 1
// 21
// 321
// 4321

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
for(i=1;i<=n;i++){//outer loop
    
     for(j=i;j>=1;j--){//inner loop
     cout<< j<<" ";//write J instead of i
    
    }
    cout<<endl;
    
}
return 0;
}

