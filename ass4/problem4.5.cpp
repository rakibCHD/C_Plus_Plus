#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int r;
    cout << "Input number of rows to see Diamond pattern: ";
    cin >> r;

    for(int i = 1; i <= r; i++){
        for(int j = r; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < (i*2-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i < r; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = ((r-i)*2-1); k > 0; k--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
