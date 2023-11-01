#include <iostream>

using namespace std;

int main(){
    //Ask for input of users age
    double age;
    cout << "Please enter age: ";
    cin >> age;
    //Calculate users maximum heartrate
    double MaxHeartrate;
    MaxHeartrate = 211-0.64*age;
    //Display max heartrate
    cout << "You maximum heartrate is ";
    cout << MaxHeartrate;

    return 0;
}