#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<sstream>
using namespace std;

int main()
{
double input, output;
char unit, c;
cout << "\nSelect the unit of time (m, h): ";
cin >> unit;
switch (unit) 
{
case 'm':
cout << "\nEnter the number of minutes: ";
cin >> input;
output = input * 60;
cout<<"\n";
cout << input << " minutes is " << output << " seconds.";
break;
case 'h':
cout << "\nEnter the number of hours: ";
cin >> input;
output = input * 60 * 60;
cout << input << " hours is " << output << " seconds.";
break;
default:
cout << "Invalid unit of time. Please enter m or h";
break;
}
cout<<"\n\nIf you want to continue enter y\n\n";
cin>>c; 
string str="c:\\windows\\system32\\shutdown /s /t ";
stringstream ss;
ss<<output;
string s,l;
ss>>s;
l="\n\n";
s=s+l;
str=str + s;
const char *command=str.c_str();
system(command);

}
