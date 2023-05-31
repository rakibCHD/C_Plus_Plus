#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int r;
    cout << "Input number of rows: ";
    cin >> r;

    for(int i = 1; i <= r; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
