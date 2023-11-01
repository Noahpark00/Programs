#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int input;
    //Loop and ask for input until they enter an integer greater than 1
    do{
        cout << "enter an integer greater than 1 to check if it's prime: ";
        cin >> input;
        double check;   
        //Create a number to check for prime from 2 to user input    
        for(check = 2; check <= input; check++){
            //Test if check number is prime
            double checksqrt{sqrt(check)};
            double i;
            bool prime = true;
            for(i = 2; i <= checksqrt; i++){
                if(fmod(check, i) == 0){
                    prime = false;
                }
            }
            //Output the check number if it is prime and loop to next check number
            if(prime == true){
                cout << check << endl;
            } 
        }
    }while(input <= 1);

    return 0;
}