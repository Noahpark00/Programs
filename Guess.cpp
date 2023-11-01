#include <iostream>

using namespace std;

int main()
{
    //Initialize Favorite number
    int favnum{17};
    int guess;
    //Loop for user's input and response
    do
    {
        //Get users guess
        cout << "Guess my favorite number between 1 and 50: ";
        cin >> guess;
        //Give hint based on user input
        if(guess < favnum)
        {
            cout << "Your guess is low, try again!" <<endl;
        }
        if(guess > favnum)
        {
            cout << "Your guess is too high, try again!" <<endl;
        }
    } while (guess != favnum);
    
    cout << "You guessed correctly! Hooray!";
}