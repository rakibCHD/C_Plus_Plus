#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char numberArray[1000];
    cout << "Input any number to see frequency: ";
    cin >> numberArray;

    int frequencyCounter[10] = {};
    for(int i = 0; i < strlen(numberArray); i++){
        int number = numberArray[i] - 48;
        frequencyCounter[number] = frequencyCounter[number] + 1;
    }


    for(int i = 0; i < 10; i++){
        cout << "The frequency of "<< i <<" =" << frequencyCounter[i] << endl;
    }

    return 0;
}
