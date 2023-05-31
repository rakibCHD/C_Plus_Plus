#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int number;
    cout << "Input a decimal number: ";
    cin >> number;

    char hex_codes[] = "0123456789ABCDEF";
    char hexadecimal[1000] = "";

    int denary = number, remainder, counter = 0;
    while (denary>0) {
        remainder = denary%16;
        denary = denary/16;
        hexadecimal[counter] = hex_codes[remainder];
        counter = counter + 1;
    }
    hexadecimal[counter] = '\0';

    cout << "The hexadecimal number is : ";
    for(int i = strlen(hexadecimal)-1; i >= 0; i--){
        cout << hexadecimal[i];
    }
    cout << endl;

    return 0;
}
