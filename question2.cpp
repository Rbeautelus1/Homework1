/*
Personal Information
Write a program that displays the following information, each on a separate line:
Your name
Your address, with city, state, and zip code
Your telephone numbers
Your college major
Use only a single cout statement to display all this information.
*/
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(){
    string name;
    string address;
    string major;
    string number;
  
    cout << "Please enter information: ";
    //You will enter name
   getline(cin,name) ;
   cout << endl;
   //You will enter address including the city, state, and zipcode
   getline(cin,address);
   cout << endl;
   //You will enter your telephone number
   getline(cin, number);
   cout << endl;
   //You will enter major
    getline(cin, major);
   cout << endl;

   cout << name << endl << address << endl << number << endl << major << endl;
    return 0;
    }