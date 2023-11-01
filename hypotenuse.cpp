#include <iostream>
#include <cmath>

using namespace std;
/*-------------------------------------------------------------------------------
Function Name: Hyp
Parameters: double x, double y
Return type: double
Description: Hyp takes as input two side lengths of a triangle and uses the Pythagorean
theorem to compute the hypotenuse of the triangle, which is then returned/output.
-----------------------------------------------------------------------------------*/
double hyp(double x, double y){
    double a = pow(x, 2);
    double b = pow(y, 2);
    double c = sqrt(a + b);

    return c;
}

int main(){
    double a;
    double b;
    char input;
    do{
    cout << "Enter side a first to find hypotenuse: ";
    cin >> a;
    cout << "Now enter side b: ";
    cin >> b;
    cout << "The hypotenuse is: " << hyp(a, b) << endl;

    cout << "Would you like to solve another? y or n:";
    cin >> input;
    }while(input == 'y' || input == 'Y');
    return 0;
}