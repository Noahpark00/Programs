#include <iostream>

using namespace std;

int main(){
    double grade;
    cout << "Enter number 1-3: ";
    cin >> grade;

    if(grade>1 && grade<3)
    {
        cout << "Cool";
    }
    else
    {
        cout <<"Follow the rules";
    }

    return 0;
}