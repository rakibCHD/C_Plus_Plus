#include <iostream>
#include <limits>

using namespace std;


int main(){

    int N, l_value1, l_value2;
    l_value1 = INT_MIN;
    l_value2 = INT_MIN;
    cout<<"Enter Size of array: ";

    cin >> N;
    int arr[N];



    for(int i = 0; i < N; i++){
            cout<<i+1<<" number is : ";
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++){
        if(l_value1 < arr[i]){
           l_value1 = arr[i];
        }
    }


    for(int i = 0; i < N; i++){
        if(l_value2 < arr[i] && l_value1 != arr[i]){
            l_value2 = arr[i];
        }
    }

    cout <<"Largest Value: "<< l_value1 << endl;
    cout <<"Second Largest Value: "<<l_value2 << endl;

    return 0;
}
