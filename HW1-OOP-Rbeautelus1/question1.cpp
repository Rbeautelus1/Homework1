/*
Sales Prediction (10 pts.)
Write a program that computes the tax and tip on a restaurant bill for 
a patron with a $44.50 meal charge. The tax should be 6.75 percent of the 
meal cost. The tip should be 15 percent of the total after adding the tax. 
Display the meal cost, tax amount, tip amount, and total bill on the screen.
*/
#include <iostream>
    #include <iomanip>
    using namespace std;

    int main(){

    float mealC = 44.50,
     TaxP = .0675,
     TipP = .15,
     mealChargeTaxA = mealC * TaxP,
     mealChargeTipA = ( mealC + mealChargeTaxA) * TipP;

    cout << setprecision(2) << fixed << endl;

    cout << "The meal cost is: " << mealC << endl;
    cout << "The tax amount is: " << mealChargeTaxA << endl;
    cout << "The tip amount is: " << mealChargeTipA << endl;
    cout << "The total bill is: " << mealC + mealChargeTaxA + mealChargeTipA << endl << endl;
    return 0;
    }