#include<iostream>
#include<math.h>

using namespace std;

int main(){

int a,b;
     cout<<"\n"<<"  Problem-4: Multiple number"<<"\n"<<endl;
     cout<<"\n"<<"     Enter two number:"<<endl;
     cout<<"            ";cin>>a;
     cout<<"            ";cin>>b;
  if(a==0){
            cout<<"\n"<<"   "<<a<<" is not a multiple of "<<b<<endl;}
  if(a!=b){
         if(b%a==0&&b!=0){
            cout<<"\n"<<"   "<<a<<" is a multiple of "<<b<<endl;}
         else{
            cout<<"\n"<<"   "<<a<<" is not a multiple of "<<b<<endl;}
  }
  else{
        cout<<"\n"<<"   "<<"You have entered same number"<<endl;
        cout<<"\n"<<"   "<<a<<" is not a multiple of "<<b<<endl;}

return 0;
}
