#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, num, digit, rev = 0;
	int x;
	cout << "Enter a positive number: ";
	cin >> x;
	int i = x;
	num = x;
	n = num;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);
	cout << " The reverse of the number is: " << rev << endl;
	if (n == rev)
		cout << " The number is a palindrome.";
	else {
		int revs = 0;
		int number = i;
		int a = num;
		int digits;
		int newNumber;
		for (int x = 1; x <= digit; x++) {
			number = number - pow(10, x);
			do
			{
				digits = number % 10;
				rev = (rev * 10) + digit;
				num = num / 10;
			} while (num != 0);
			if (n == rev) {
				cout << "The number is a palindrome";
				break;
			}
			else
				continue;
		}
	}
	return 0;
}
