#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

int main(){
    array <int, 9> list;
    cout << "Enter some numbers: ";
    int input;
    for(int index = 0; index < 9; index++){
        cin >> list[index];       
    }
    sort(list.begin(), list.end());
    cout << "The median of you list is: " << list[4];
}