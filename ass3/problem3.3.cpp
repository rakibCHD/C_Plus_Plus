#include<iostream>
using namespace std;
int main(){
    int arr[10],N;
    cout<<"enter size of array: ";
    cin>>N;
    cout<<"Enter the numbers of Array: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            cout<<"Number "<<arr[i]<<" is Even"<<endl;
        }
    }
    for(int i=0;i<N;i++){
        if(arr[i]%2==1){
            cout<<"Number "<<arr[i]<<" is Odd"<<endl;
        }

    }


return 0;
}
