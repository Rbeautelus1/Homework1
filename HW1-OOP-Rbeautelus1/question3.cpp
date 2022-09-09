/*
Write C++ program that receive three different values and compute 
the following expressions for the following algebra expressions 
 */
#include <iostream>
    #include <cmath>
    using namespace std;

    int main(){

        double h,k,z;
        float g;

    //Part a
        cout << "Enter a value for h: ";
        cin >> h;
        cout << "Enter a value for k: ";
        cin >> k;

    
        g = (h + 12) / (4 * k);
        
        cout << "The value of g = " << g << endl;

    //Part b
        cout << "Enter a value for k: ";
        cin >> k;
        cout << "Enter a value for h: ";
        cin >> h;

        z = 5 * h + 14 * k + 6 * pow(k,2);

        cout << "The value of z = " << z << endl;
        }