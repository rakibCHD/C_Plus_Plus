#include<iostream>
#include<math.h>

using namespace std;

int main(){
   int a,b;
   cout<<"\n"<<"  Problem-3: Maximum number, Even/Odd number"<<endl;
   cout<<"\n"<<"   Enter two number:"<<"\n"<<endl;
   cout<<"         ";cin>>a;
   cout<<"         ";cin>>b;
  if(a!=b){
          if(a>b){
          cout<<"\n"<<"   Maximum number is: "<<a<<"\n"<<endl;}
          else{
          cout<<"\n"<<"   Maximum number is: "<<b<<"\n"<<endl;}
       if(a>=0){
          if(a%2==0){
          cout<<"   "<<a<<" is a even number"<<"\n"<<endl;}
          else{
          cout<<"   "<<a<<" is a odd number"<<"\n"<<endl;}}
       else{
          cout<<"   "<<a<<" is a Negative number"<<"\n"<<endl;}}
  else{
          cout<<"\n"<<"  You have entered same number"<<"\n"<<endl;}

  if(b>=0){
          if(b%2==0){
          cout<<"   "<<b<<" is a even number"<<"\n"<<endl;}
          else{
          cout<<"   "<<b<<" is a odd number"<<"\n"<<endl;}}
  else{
          cout<<"   "<<b<<" is a Negative number"<<"\n"<<endl;}

return 0;
}

