#include <iostream>
using namespace std;

int main() {
    int weight;
    cout<<"Enter Watermelon weight(kg): ";
    cin>>weight;

    if(weight%2 == 0 && weight!=2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
