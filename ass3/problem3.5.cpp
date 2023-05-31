#include <iostream>
#include <limits>

using namespace std;


int main() {

    int N, l_value1, l_value2;
    l_value1 = INT_MAX;
    l_value2 = INT_MAX;
    cout<<"Enter array size: ";
    cin >> N;
    int arr[N];


    for(int i = 0; i < N; i++){
            cout<<i+1<<" element is: ";
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++){
        if(l_value1 > arr[i]){
            l_value1 = arr[i];
        }
    }

    for(int i = 0; i < N; i++){
        if(l_value2 > arr[i] && l_value1 != arr[i]){
            l_value2 = arr[i];
        }
    }

    cout <<"smallest element: "<< l_value1 << endl;
    cout <<"second smallest element: "<< l_value2 << endl;

    return 0;
}
