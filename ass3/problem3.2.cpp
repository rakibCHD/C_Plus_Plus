#include<iostream>
using namespace std;

int main(){
    int marks[5];

    for(int i=0;i<5;i++){

         cout<<"Marks of student: "<<i+1<<" = ";
         cin>>marks[i];

        }
        cout<<"Students marks are: ";
for(int i=0;i<5;i++){

         cout<<marks[i]<<" ";

        }
        cout<<endl;

        int sum=0;

        for(int i=0;i<5;i++){
        sum=sum+marks[i];
        }
        cout<<"Total Obtained marks all students: "<< sum<<endl;
        cout<<"Average Obtained marks by the students= "<<float(sum/5)<<endl;


return 0;
}
