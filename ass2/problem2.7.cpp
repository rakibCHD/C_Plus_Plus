#include<iostream>
#include<math.h>
using namespace std;
int main() {

  int n1=1,n2=1,n3,i,n;

 cout<<"\n"<<"Enter a number to find the Fibonacci series: ";
 cin>>n;
cout<<"\n"<<"Fibonacci seris of "<<n<<" is: "<<n1<<" "<<n2<<" ";

 for(i=2;i<n;++i){

    n3=n1+n2;
    cout<<n3<<" ";
    n1=n2;
    n2=n3;

 }
   return 0;
   }
