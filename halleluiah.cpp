#include <iostream>
#include <string>
using namespace std;


int main ()
{
//start of demographic profile gathering code
string n;
int age;
int pra, prb;
char resp;
cout << "Enter your name: " << endl;
	getline(cin, n);
cout << "Enter your age" << endl;
	cin >> age;
cout << "Please input two product values, ranging from 1-100" << endl;
cout << "Value of product 1" << endl;
	cin >> pra;
cout << "Value of product 2" << endl;
	cin >> prb;

cout << " " << endl;

cout << "Your name is: " << n << endl;
cout << "Your age is: " << age << endl;
cout <<  "You've spent: " << pra << " on product 1," << endl << "and you've spent " << prb << " on product 2" << endl;
//end of demographic profile gathering code

//start sum and average output
cout << " " << endl;
int sum = pra + prb;
int avg = sum/2;
cout << "Your total is: " << sum << ", and the average is: " << avg << endl;
//end of sum and average output

//computation start
cout << "Print descriptor? Y/N" << endl;
cin >> resp;
switch(resp){
case 'y':
case 'Y':
if ((avg <= 100) && (avg >= 70)){
	cout << "You're spending quite a lot without saving anything";
}else if ((avg <= 69) && (avg >= 50)){
	cout << "Medium spending and saving, well done";
}else if ((avg >= 10) && (avg <= 49)){
	cout << "It seems like you didn't spend much";
}else if ((avg <= 9) && (avg >= 0)){
	cout << "You practically didn't buy anything at all";
}else{
	cout << "Value not in given range" << endl;
}
break;

case 'n':
case 'N':
cout << "Thanks!";
break;

default:
cout << "Invalid input";
break;
}
return 0;
}