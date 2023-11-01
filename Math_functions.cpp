#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //a = 7.5
    double a = fabs(7.5);
    //b = 7
    double b = floor(7.5);
    //c = 0
    double c = fabs(0.0);
    //d = 0
    double d = ceil(0.0);
    //e = 6.4
    double e = fabs(-6.4);
    //f = -6
    double f = ceil(-6.4);
    //g = -14
    double g = ceil(-fabs(-8 + floor(-5.5)));
    //h = 16
    double h = pow(4, 2);
    //i = 4
    double i = sqrt(16);
    //j = 3
    double j = cbrt(27);

    cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl
    << h << endl << i << endl << j;

    return 0;
}