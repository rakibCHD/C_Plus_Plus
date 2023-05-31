#include <iostream>
using namespace std;


int main() {

    int N;
    cout<<"Enter Alphabet quantity: ";
    cin >> N;
    char chArr[N];
    cin>>chArr;



    for(int i = 0; i < N; i++){
        if(chArr[i] == 'A' || chArr[i] == 'E' || chArr[i] == 'I' || chArr[i] == 'O' || chArr[i] == 'U' || chArr[i] == 'a' || chArr[i] == 'e' || chArr[i] == 'i' || chArr[i] == 'o' || chArr[i] == 'u'){
            cout <<"The Vowels are:"<< chArr[i] << endl;
        }
    }

    return 0;
}
