#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int a;
    cout<<"Enter integer quantity to check prime/not prime:";
    cin >> a;
    cout<<"Input integer:"<<endl;

    int *arr = new int[a + 1];
    for(int i = 0; i < a; i++){
        cin >> *(arr + i);
    }
    for(int i = 0; i < a; i++){
        int number = arr[i];
        bool isPrime = true;

      if(number == 0 || number == 1) isPrime = false;

       for(int i = 2; i <= number/2; i++){
            if(number%i==0){
                isPrime = false;
                break;
            }
        }
        cout << number << " is "<< (isPrime ? "" : "not ") <<"a prime number" << endl;
    }

    return 0;
}
