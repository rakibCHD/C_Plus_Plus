#include<iostream>
#include<math.h>

using namespace std;

int main()
{

double m,h,BMI;

   cout<<"\n"<<"  Problem-2: BMI(Body Mass Index) calculator"<<"\n"<<endl;
   cout<<"   Enter your mass(kg): ";
   cin>>m;
   cout<<"   Enter you height(m):";
   cin>>h;

   BMI=m/(h*h);
   cout<<"\n"<<"  Your BMI is: "<<BMI<<endl;
return 0;

}



