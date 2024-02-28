#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>

using namespace std;

void calculation()
{
    char c;

    time_t t = time(0);
    tm* now = localtime(&t);
    int currentYear = now->tm_year + 1900;
    int currentMonth = now->tm_mon + 1;
    int currentDay = now->tm_mday;

    int birthYear, birthMonth, birthDay;

    cout << "\n Enter your birth Day(day /month /year): ";
    cin >> birthDay>>birthMonth>>birthYear;

    if(birthYear<currentYear)
    {
        int age = currentYear - birthYear;

        if (birthMonth > currentMonth || (birthMonth == currentMonth && birthDay > currentDay)) {
            age--;
        }

        cout << "\n Your age is: " << age << " years" << endl;

        cout << "\n Continue (y/n):";
        cin >> c;

        if(c=='y'||c=='Y')
            calculation();
        else
        {
            exit(0);
        }
    }
    else
    {
      cout << "\n Invalid birth year.Please try again." << endl;
      calculation();
    }

   getch();
}

int main() {

 calculation();
}




