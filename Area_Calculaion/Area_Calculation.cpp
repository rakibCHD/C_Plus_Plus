#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

#define PI 3.14159265

void display()
{
  cout<<"--------------Area Calculation----------------"<<endl;

  cout<<"_________________1.Circle_________________"<<endl;
  cout<<"_________________2.Square_________________"<<endl;
  cout<<"_________________3.Triangle_______________"<<endl;
  cout<<"_________________4.Rectangle______________"<<endl;
  cout<<"_________________5.Ellipse________________"<<endl;

  cout<<"----------------------------------------------\n"<<endl;
}

void input_output()
{
    int choice;
    char con;

    cout<<"Enter Your Choice(1-5) : ";
    cin>>choice;

    if(choice == 1)
    {
        float radius;

        cout<<"\n------------Area of a Circle-----------"<<endl;
        cout<<"Enter radius of Circle : ";
        cin>>radius;
        cout<<"Area of this Circle is: "<<setprecision(8)<<PI*(radius*radius)<<endl;
    }
    else if(choice == 2)
    {
        float side;

        cout<<"\n------------Area of a Square-----------"<<endl;
        cout<<"Enter length of a side of Square : ";
        cin>>side;
        cout<<"Area of this Square is: "<<setprecision(8)<<side*side<<endl;
    }
    else if(choice == 3)
    {
        float base;
        float height;
        cout<<"\n------------Area of a Triangle-----------"<<endl;
        cout<<"Enter base of Triangle : ";
        cin>>base;
        cout<<"Enter  height of Triangle : ";
        cin>>height;
        cout<<"Area of this Triangle is: "<<setprecision(8)<<0.5*base*height<<endl;
    }
   else if(choice == 4)
    {
        float length;
        float width;

        cout<<"\n------------Area of a Rectangle-----------"<<endl;
        cout<<"Enter length of Rectangle : ";
        cin>>length;
        cout<<"Enter  width of Rectangle : ";
        cin>>width;
        cout<<"Area of this Rectangle is: "<<setprecision(8)<<length*width<<endl;
    }

   else if(choice == 5)
    {
        float base1;
        float base2;

        cout<<"\n------------Area of Ellipse-----------"<<endl;
        cout<<"Enter radius of major axis of Ellipse : ";
        cin>>base1;
        cout<<"Enter radius of minor axis of Ellipse : ";
        cin>>base2;
        cout<<"Area of this Ellipse is: "<<setprecision(8)<<PI*base1*base2<<endl;
    }
    else{
    }
    cout<<"\nDo you want to continue(y/n): ";
    cin>>con;
    if(con=='y' || con=='Y')
        input_output();
    else{
    }

}

int main()
{
    display();
    input_output();
    return 0;
}

