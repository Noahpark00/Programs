#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double input;
    bool prime = true;
    do{
    cout << "enter an integer greater than 1 to check if it's prime: ";
    cin >> input;
    double i;
    double inputsqrt{sqrt(input)};
    for(i = 2; i <= inputsqrt; i++){
        if(fmod(input, i) == 0.0){
            prime = false;
        }
    }
    }while(input <= 1);
    if(prime == true){
        cout << "Prime";
    }
    else{
        cout << "Not prime";
    }

    return 0;
}