#include <iostream>

using namespace std;

int main(){
    //Collect information about the users
    cout << "Enter weight in pounds: ";
    double weight;
    cin >> weight;
    cout << "Enter height feet: ";
    double feet;
    cin >> feet;
    cout << "inches: ";
    double inches;
    cin >> inches;
    //Calculate BMI
    double height;
    height = feet*12+inches;
    double heightsqr;
    heightsqr = height*height;
    double BMI;
    BMI = weight*703/heightsqr;
    //Display BMI
    cout << "Your BMI is: ";
    cout << BMI;

    return 0;
}