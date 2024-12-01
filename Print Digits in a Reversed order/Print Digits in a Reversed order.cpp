#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Solution #5 Print Digits in a Reversed order
//Course #5



int ReadPositiveNumber(string Message)
{

	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void PrintResult(int Number)
{
	string digits = to_string(Number);

	
	for (int i = digits.length(); i >= 0; i--)
	{
		cout << digits[i] << endl;
	}

	

}






int main()
{
	PrintResult(ReadPositiveNumber("Please enter postitvie number"));
	
}

