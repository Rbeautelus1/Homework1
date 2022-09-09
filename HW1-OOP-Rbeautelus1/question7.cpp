/*Comparing Integers (10pts)
Write a program that ask the user to enter two integers, 
obtains the numbers from the user, then prints the larger 
number followed by the words “is larger”. If the number are 
equal, print message “these numbers are equal”.
*/
#include <iostream>
        using namespace std;

        int main()
        {

            int num1,num2;

            cout << "Enter two integers: " << endl;
            cin >> num1 >> num2;

            if(num1 > num2){
            cout << num1 << " is larger " << endl;
            }
            if(num2 > num1){
                cout << num2 << " is larger " << endl;
            }
            if(num1 == num2 ){
                cout << "These numbers are equal " << endl;
            }
        }
