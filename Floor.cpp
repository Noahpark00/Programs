#include<iostream>
#include<cmath>

using namespace std;

double x;
/*-------------------------------------------------------------------------------
Function Name: roundInt
Parameters: double x
Return type: double
Description: roundInt takes a decimal number and uses the floor function to round 
it to the nearest integer.
-----------------------------------------------------------------------------------*/
double roundInt(double x){
    double y = floor(x + 0.5);
    return y;
}
/*-------------------------------------------------------------------------------
Function Name: roundTen
Parameters: double x
Return type: double
Description: roundTen takes a decimal number and uses the floor function to round 
it to the tenth decimal place.
-----------------------------------------------------------------------------------*/
double roundTen(double x){
    double y = floor(x * 10 + 0.5) / 10;
    return y;
}
/*-------------------------------------------------------------------------------
Function Name: roundHun
Parameters: double x
Return type: double
Description: roundHun takes a decimal number and uses the floor function to round 
it to the hundredth decimal place.
-----------------------------------------------------------------------------------*/
double roundHun(double x){
    double y = floor(100 * x + 0.5) / 100;
    return y;
}
/*-------------------------------------------------------------------------------
Function Name: roundThou
Parameters: double x
Return type: double
Description: roundInt takes a decimal number and uses the floor function to round 
it to the thousandth decimal place.
-----------------------------------------------------------------------------------*/
double roundThou(double x){
    double y = floor(1000 * x + 0.5) / 1000;
    return y;
}

int main(){
    int input;
    //Ask user for decimal number
    cout << "Enter decimal number to round: ";
    cin >> x;
    do{
        //Output menu for rounding options
        cout << "Would you like to round to nearest 1.integer 2.tenth 3.hundredth 4.thousandth?: ";
        cin >> input;
        //Switch based on input
        switch (input)
        {
        case 1:
            cout << roundInt(x);
            break;

        case 2:
            cout << roundTen(x);
            break;

        case 3:
            cout << roundHun(x);
            break;
        
        case 4:
            cout << roundThou(x);
        }
        //Make sure user enters a correct option
    }while (input < 1 || input > 4);
    
    return 0;
}