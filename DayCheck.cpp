#include<iostream>

using namespace std;

int main()
{
    //List week and ask for user input
    cout << "Enter the number of the current day of the week:\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday" << endl;
    int day;
    cin >> day;
    //Create switch for user choice
    switch(day)
    {
        //Create a case for 1-5 and output accordingly
        case 1 ... 5:
        cout << "It is a weekday!";
        break;
        //Create a case for 6-7 and output accordingly
        case 6 ... 7:
        cout << "It is the weekend!";
        break;
        //Output in user entered something not on the menu
        default:
        cout << "That is not a valid input";
        break;
    }

    return 0;
}