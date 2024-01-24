#include<iostream>
#include<string>
#include <iomanip>
using namespace std;


float bmi_calculation(float h_feet, float h_inches,float weight)
{
    float height=(h_feet*0.3048)+(h_inches*0.0254);
    float bmi=(weight/(height*height));

    return bmi;
}

void display()
{
  cout<<"-------------BMI-----------"<<endl;
  cout<<"------Body Mass Index------\n"<<endl;

  cout<<"Underweight   = <18.5"<<endl;
  cout<<"Normal weight = 18.5-24.9"<<endl;
  cout<<"Overweight    = 25-29.9"<<endl;
  cout<<"  Obesity     = 30++ "<<endl;

  cout<<"---------------------------\n"<<endl;
}

void input_output()
{
    float final_result,weight_kg,height_feet,height_inche;

    cout<<"Enter Your Height(feet)  : ";
    cin>>height_feet;
    cout<<"Enter Your Height(inches): ";
    cin>>height_feet;
    cout<<"Enter Your Weight(kg): ";
    cin>>weight_kg;

    cout<<"Calculating........\n"<<endl;
    final_result= bmi_calculation(height_feet,height_inche,weight_kg);

    if(final_result<18.5)
    {
        cout<<"Your BMI is: "<<setprecision(4)<<final_result<<endl;
        cout<<"Your are UnderWeighted."<<endl;
    }
    if(final_result>=18.5 & final_result<=24.9)
    {
        cout<<"Your BMI is: "<<setprecision(4)<<final_result<<endl;
        cout<<"Your are NormalWeighted."<<endl;
    }
    if(final_result>=25 & final_result<=29.9)
    {
        cout<<"Your BMI is: "<<setprecision(4)<<final_result<<endl;
        cout<<"Your are OverWeighted."<<endl;
    }
    if(final_result>=30)
    {
        cout<<"Your BMI is: "<<setprecision(4)<<final_result<<endl;
        cout<<"Your are in Obesity & it is risk to health."<<endl;
    }

}

int main()
{
    display();
    input_output();

    return 0;
}

