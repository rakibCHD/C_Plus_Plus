#include<iostream>
#include<math.h>

using namespace std;

int main(){

 int i,num,sum=0;

 cout<<"\n"<<"Enter a number to find it's sum of digits: ";
 cin>>num;

   while(num>0){
        i=num%10;
       sum= sum+i;
       num=num/10;
   }
cout<<"\n"<<"sum of digits ="<<sum<<endl;


return 0;
}
