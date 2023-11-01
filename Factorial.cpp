#include<iostream>

using namespace std;

int main()
{

    //Get input from user and store it
    double n; 
    cout << "Enter a non-negative integer to find the factorial: ";
    cin >> n;
    //find factorial of input
    double fac;
    double result;
    long int store{1};
    for(fac = 2; fac <= n; fac++)
    {
        store *= fac;
    }
    //output factorial
    cout << store;
}