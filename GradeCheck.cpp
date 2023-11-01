#include <iostream>

using namespace std;

int main(){
    // Ask for input of user's grade
    cout << "Enter your current grade as a percent: ";
    double grade;
    cin >> grade;
    // Checks grade and outputs letter grade based on percent
    if(grade <0)
    {
        cout << "How could you have done this bad?";
    }
    if(grade >= 0 && grade < 70)
    {
        cout << "F";
    }
    if(grade >= 70 && grade < 80)
    {
        cout << "C";
    }
    if(grade >= 80 && grade < 90)
    {
        cout << "B";
    }
    if(grade >= 90)
    {
        cout << "A";
    }
}