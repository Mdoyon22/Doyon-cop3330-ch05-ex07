/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Doyon
 */

#include "std_lib_facilities.h"

using namespace std;


void quad_solver(double a, double b, double c)
{
    double res = 0;
    double res2 = 0;

    res = (-b + sqrt((pow(b, 2) - 4*a*c))) / (2*a);
    res2 = (-b - sqrt((pow(b, 2) - 4*a*c))) / (2*a);

    cout << "x = " << res << " and " << res2 << endl;
}




int main()
{
    double a = 0, b = 0, c = 0;
    
    cout << "Enter a then b then c using the form ax^2 + bx + c = 0." << endl;
    cin >> a >> b >> c;

    if ((pow(b, 2) - 4*a*c) < 0)
        cout << "No real roots." << endl;

    else
        quad_solver(a, b, c);

    return 0;
    
}