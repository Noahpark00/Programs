#include <iostream>

using namespace std;

int main()
{
    //Ask user their age and store their input
    double age;
    cout << "Enter your age: ";
    cin >> age;
    //If statement if user is older than 18
    if(age>=18)
    {
        //Output verifying that user can vote
        cout << "You are old enough to vote in the next election!";
    }
    else
    {
        //Output stating that user can't vote
        cout << "You are not old enough to vote in the next election.";
    }

    return 0;
}