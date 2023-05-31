#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int a;
    cout<<"Enter integer quantity to check perfect/not perfect:";
    cin >> a;
    cout<<"Input integers:"<<endl;

    int *arr = new int[a + 1];
    for(int i = 0; i < a; i++){
        cin >> *(arr + i);
    }

    for(int i = 0; i < a; i++){
        int number = arr[i], sumOfDivisors = 0;

        for(int j = 1; j < number; j++){
            if(number%j==0) sumOfDivisors = sumOfDivisors + j;
        }

        cout << number <<  ((number == sumOfDivisors) ? " is a perfect number" : " is not a perfect number") << endl;
    }


    return 0;
}
