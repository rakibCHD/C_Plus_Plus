#include<iostream>
#include<math.h>

using namespace std;

int main(){

 int i,f=1,n;
  cout<<"\n"<<"Enter number to find it's factorial: ";
  cin>>n;

   for(i=1;i<=n;i++){
    f=f*i;
    }
    cout<<"\n"<<"  Factorial of " << n << " is = " << f;

return 0;
}
