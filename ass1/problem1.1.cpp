#include<iostream>
#include<math.h>

using namespace std;

int main(){
   
int km,petrol,kmpl,parking,tolls,Total;

   cout<<"\n"<<"  Problem-1: The  cost per day of driving to work:"<<"\n"<<endl;
   cout<<"   Total kilometers driven per day-"<<endl;
   cout<<"   Cost per liter of petrol-"<<endl;
   cout<<"   Average kilometer per liter-"<<endl;
   cout<<"   Parking fees per day-"<<endl;
   cout<<"   Tolls per day-"<<endl;
cout<<"\n";
   cout<<"  Enter the cost($):"<<endl;
   cout<<"              ";cin>>km;
   cout<<"              ";cin>>petrol;
   cout<<"              ";cin>>kmpl;
   cout<<"              ";cin>>parking;
   cout<<"              ";cin>>tolls;
cout<<"\n";

   Total=km+petrol+kmpl+parking+tolls;
   cout<<"   Total cost per day is($): "<<Total<<endl;


return 0;
}



