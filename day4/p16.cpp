// Patterns (Pyramid)//
// to print the patterns n=4//
//      1
//     121   
//    12321
//   1234321 

#include<iostream>
using namespace std;
int main()
{
int n=4,i,j;
for(i=0;i<n;i++){
    //space : n-i-1
  for(j=0;j<n-i-1;j++){//inner loop
        cout<<" ";
      }
    //   num1:i+1
    for(j=1;j<=i+1;j++){
        cout<<j;
    }
    // num2
    for(j=i;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
   
}
return 0;
}

