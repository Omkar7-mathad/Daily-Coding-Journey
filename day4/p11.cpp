// Patterns (Triangles)//
// to print the patterns n=4//
// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j,num=1;
for(i=1;i<=n;i++){//outer loop
    
     for(j=1;j<=i;j++){//inner loop
     cout<< num<<" ";//write J instead of i
      num++;
    }
    cout<<endl;
    
}
return 0;
}

