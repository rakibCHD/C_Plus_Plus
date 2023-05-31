#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,s=0,mini,maxi;

	cout<<"\n"<<" Enter two number to find the sum of even number between them =  "<<"\n"<<endl;
	cout<<"    ";cin >> mini;
	cout<<"    ";cin >> maxi;

	cout<<"\n"<<"Even numbers between  "<<mini<<" and "<<maxi<<" = ";

	for(i=mini;i<=maxi;i++){
		if(i%2==0){
  			cout<<i<<" ";}
        s=s+i;

	}

	cout<<"\n"<<" sum of even numbers is = "<<s;

 	return 0;
}
