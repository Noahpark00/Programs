#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
double midOdd(vector<double> vect){
    int x;
    int y;
    x = vect.size()/2;
    y = vect[ceil(x)];
    return y;
}

double midEven(vector<double> vect){
    double x;
    double y;
    x = vect.size()/2;
    y = (vect[ceil(x)] + vect[ceil(x)-1]) / 2;
    return y;
}

int main(){
    vector<double> list;
    cout << "Enter some integers to find the median, enter -1 to stop: ";
    int input;
    do{
        cin >> input;
        if(input != -1){
        list.push_back(input);
        }
    }while(input != -1);

    sort(list.begin(), list.end());

    if(list.size() % 2 == 0){
        cout << midEven(list);
    }
    else{
        cout << midOdd(list);
    }

    return 0;
}