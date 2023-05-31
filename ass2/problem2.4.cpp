#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int i,g,n1,n2;

    cout<<"\n"<<" Input two number to find gcd: "<<endl;
    cout<<"    ";cin >> n1;
    cout<<"    ";cin >> n2;

    for(i=1;i<=n1 && i<=n2;i++){

        if (n1%i==0 && n2%i==0){
            g=i;}
      }
    cout<<" Greatest Common Divisor (GCD) is: "<<g<<endl;

return 0;
}
