#include<iostream>
#include<random>
#include<ctime>

using namespace std;

int main(){
    default_random_engine engine{static_cast<unsigned int>(time(0))};
    uniform_int_distribution<unsigned int> randomInt{1, 20};

    int x = randomInt(engine);
    int guess;
    cout << "Enter a number to guess: ";
    cin >> guess;

    int attempts{1};
    while(guess != x){
        if(guess < x){
        cout << "Guess in too low, enter another number to guess: ";
        cin >> guess;
        }
        else{
            cout <<"Guess is too high, enter another number to guess: ";
            cin >> guess;
        }
        attempts++;
    }
    
    cout << "Correct! It took you " << attempts << " guesses!";

    return 0;
}