/*
Monthly Sales Tax (10 pts)
A retail company must file a monthly sales tax report listing the sales 
for the month and the amount of sales tax collected. Write a program that 
asks for the month, the year, and the total amount collected at the cash 
register (that is, sales plus sales tax). Assume the state sales tax is 4 
percent and the county sales tax is 2 percent.

If the tota l amount collected is known and the total sales tax is 6 percent, 
the amount of product sales may be calculated as 
S=  T/1.06

Where S is the product sales and T is the total income (product sales plus sales tax). 
The program should display a report as the following:

Month: August 2022
- - - - - - - - - - - - - - - - - - -
Total Collected:	      $  26572.89
Sales:			      $  25068.76
Country Sales Tax:           $  501.38
State SalesTax:                $  1002.75
Total Sales Tax:	      $   1504.13
*/

#include <iostream>
        #include <string>
        
        using namespace std;

        int main()
        {
            string month;
            int year;
            float S,T,TstateTax,TcountryTax,TsalesTax;
            float countrySalesTax = 0.02;
            float StateSalesTax = 0.04;
            float SalesTax = 0.06;
            


        
    cout << "Month: ";
    cin >> month;
    
    cout << "Year: ";
    cin >> year;
    cout << "Total amount collected for the month of " << month << ": ";
    cin >> T;
        

    
    cout << "------------------------------------------------------------------" << endl;
    cout << "Month: " << month << endl;
            S = T / 1.06;
        TstateTax = S * StateSalesTax;
        TcountryTax = S * countrySalesTax;
        TsalesTax  = S * SalesTax;

            cout << "Total collected: $" << T << endl;
            
            cout << "Sales: $" << S << endl;
            cout << "Country Sales Tax: $" << TcountryTax << endl;
            cout << "State Sales Tax: $" << TstateTax << endl;
            cout << "Total Sales Tax: $" << TsalesTax << endl;
            

        }