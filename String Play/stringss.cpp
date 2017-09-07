/**
This program will ask for the user's first and last name.
once the program receives that information it will replace the vowels with the $ symbol
and also reverse the user's name.
**/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

string fname; // declares string for the user's first name
string lname; //declares a string for the user's last name
string wname = lname + fname;
cout <<"Enter in your first name"<<endl; // requests the  user's first name
cin >> fname; // grabs the user's first name to store it in the fname string
cout <<"Enter in your last name"<<endl; // request the user's last name
cin >> lname; // grabs the user's last name to store it in the lname string

reverse(lname.begin(),lname.end()); //takes the user's last name and reverses it
reverse(fname.begin(),fname.end()); //takes the user's first name and reverses it
cout << lname<< " " <<fname << endl; //displays the user's first and last name reversed
}
