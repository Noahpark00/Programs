#include <iostream>

using namespace std;

int main()
{
    //Ask user for age and store their response
    double age;
    cout << "Enter your age: " << endl;
    cin >> age;
    //If statement if they're older than 18
    if(age>=18)
    {
        //Output to verify voter status
        cout << "You are old enough to vote in the next election!" << endl;
        //If statement if user is older than 21
        if(age>=21)
        {
        //Output to verify user can drink
        cout << "You are also old enough to drink." << endl;
        }
        else
        {
            //Output if user is older that 18 but younger than 21
            cout << "But you can't drink" << endl;
        }
    }
    //Else statement if user is younger than 18
    else
    {
        //Output if user is younger than 18
        cout << "You are not old enough to vote in the next election." << endl;
    }

    return 0;
}