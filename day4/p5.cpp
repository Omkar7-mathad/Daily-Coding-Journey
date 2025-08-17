// Patterns//
// to print the patterns n=3//
// ABC
// DEF
// GHI

#include<iostream>
using namespace std;
int main()
{
int n=3,i,j;
char ch;
ch='A';
for(i=0;i<n;i++){//outer loop
     for(j=0;j<n;j++){//inner loop

        cout<< ch;
        ch++;

    }
    cout<<endl;
}
return 0;
}