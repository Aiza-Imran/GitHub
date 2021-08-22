// this programs table of the non negative number entered by user
// this program also prints sqaure and cube of the number entered by user

#include <iostream>     //for input or output
#include <cmath>        //for mathematical functions like sqrt, log, pow etc.
using namespace  std;

int main()
{
	int num, i;
	cout << "Enter a number: ";
	cin >> num;
	while (num < 0)          // input validation
	{
		cout << "ERROR:Invalid input." << endl;
		cout << "Enter again(>=0): ";
		cin >> num;
	}

	for (i = 1; i <= 10; i++)     // table of input number
	{
		cout << num << " * " << i << " : " << num * i << endl;
	}
	cout << endl << endl;


	// square and cube of number entered by user
	cout << "Square of the number entered by user is: " << pow(num, 2) << endl;
	cout << "Cube of number entered by user is: " << pow(num, 3) << endl;
	return 0;
}