#include<iostream>
#include<math.h>

using namespace std;

int main(){

 int i,num;

 cout<<"\n"<<"Enter a number to find it's Multiplication Table:";
 cin>>num;

    for(i=1;i<=10;i++){
        cout<<"\n"<<num<<" x "<< i<< " = "<<num*i<<endl;
    }

return 0;
}
