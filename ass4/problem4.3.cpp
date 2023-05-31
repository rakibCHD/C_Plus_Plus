#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n, f=1;
    cout << "Enter a number to calculate factorial: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        f = f * i;
    }

    cout << "Factorial of " << n << " is: " << f << endl;


    return 0;
}
