#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Get user input
    int input;
    do 
    {
        cout << "Enter a non-negative integer to find all primes below it: ";
        cin >> input;
        //Check if input is prime
        int i;
        int check{2};
        while(check < input) {
        bool prime = true;
            for(i = 2; i < check; i ++) {
                if(fmod(i, sqrt(check)) == 0) {
                    prime = false;
                    break;
                }
            }
            if(prime == true){
                cout << i <<endl;
            }
            check++;
        }
    }while(input < 1);

    return 0;
}
//make program break; when % = 0 except for 1 and itself