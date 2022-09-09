/*
6.	Odd or Even (10 pts)
Write a program that reads an integer and determines and prints whether it’s odd or even.
*/
#include <iostream>
        using namespace std;

        int main()
        {
            int num;

            cout << "Enter an integer: ";
            cin >> num;

            if(num % 2 == 0)
                cout << num << " is even " << endl;
            
            else
            cout << num << " is odd " << endl;
            
            return 0;
        }