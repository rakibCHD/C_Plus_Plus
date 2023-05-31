#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int product_number,quantity;
    double unit_price,total;
         cout<<"\n"<<"  Problem-5: Product sells "<<"\n"<<endl;
         cout<<"    Enter product number:"<<"\n"<<endl;
         cout<<"            ";cin>>product_number;

    switch(product_number){
       case 1:unit_price=200.75;
         cout<<"\n"<<"   product-1 unit price: 200.75 BDT"<<"\n"<<endl;
         cout<<"    Enter sold quantity: ";cin>>quantity;break;
       case 2:unit_price=345.50;
         cout<<"\n"<<"   product-2 unit price: 345.50 BDT"<<"\n"<<endl;
         cout<<"    Enter sold quantity: ";cin>>quantity;break;
       case 3:unit_price=775.75;
         cout<<"\n"<<"   product-3 unit price: 775.75 BDT"<<"\n"<<endl;
         cout<<"    Enter sold quantity: ";cin>>quantity;break;
       case 4:unit_price=400.35;
         cout<<"\n"<<"   product-4 unit price: 400.35 BDT"<<"\n"<<endl;
         cout<<"    Enter sold quantity: ";cin>>quantity;break;
       case 5:unit_price=1200.75;
         cout<<"\n"<<"   product-5 unit price: 1200.75 BDT"<<"\n"<<endl;
         cout<<"    Enter sold quantity: ";cin>>quantity;break;
    default:
         cout<<"Invalid product number"<<endl;
    return 0;
   }
         total=unit_price*quantity;
         cout<<"\n"<<"\n"<<"        Total retail value: "<<total<<" BDT"<<endl;

return 0;
}
