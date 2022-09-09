/*
Car-Pool Savings Calculator (10 pts)
Research several carpooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by carpooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work:
a.	Total miles driven per day.
b.	Cost per gallon of gasoline (use $ 3.69 for test propose).
c.	Average miles per gallon (use $5.6 gal/100 miles for test propose).
d.	Parking fees per day (use $10 per day for test propose).
e.	Tolls per day (use $3.00 for test propose).
*/
#include <iostream>
        using namespace std;

        int main(){

            double miles;
            double Cost_Pgasoline;
            double Amiles;
            double Fees;
            double Tolls;
            double total_cost;

            cout << "Enter total miles driven per day: ";
            cin >> miles;

            cout << "Cost per gallon of gasoline: ";
            cin >> Cost_Pgasoline;

            cout << "Average miles per gallon: ";
            cin >> Amiles;

            

            cout << "Enter parking fees per day: ";
            cin >> Fees;

            cout << "Enter total amount of tolls per day: ";
            cin >> Tolls;

            total_cost = (miles/Amiles) * Cost_Pgasoline + Fees + Tolls;

            cout << "Total driving cost per day is: " << total_cost << endl;
            return 0;
        }