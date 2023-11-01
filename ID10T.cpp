#include <iostream>

using namespace std;

int main(){
    //Output instructions and take and store user's input
    double num;
    cout << "Enter a decimal number between 0 and 10: ";
    cin >> num;
    //Create variable to raise user's number ^4
    double num4;
    //Square user's number
    num4 = num*num*num*num;
    //If statement to make sure they input a valid number
    if(num<0 || num>10)
    {
        cout << "Try again buddy";
    }
    //Else statement if the user put a valid number
    else
    {
        cout << "Here is your number ^4: " << num4;
    }
    return 0;
    
}