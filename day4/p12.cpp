// Patterns (Triangles)//
// to print the patterns n=4//
// A
// BA
// CBA
// DCBA

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
char ch='A';
for(i=1;i<=n;i++){//outer loop
    
     for(j=i;j>=1;j--){//inner loop
        ch = 'A' + j - 1;
     cout<< ch<<" ";
      
    }
    cout<<endl;
   
}
return 0;
}

