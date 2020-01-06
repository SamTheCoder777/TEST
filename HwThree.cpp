#include <iostream>
#include <math.h>
using namespace std;
int main()
{	
	string palindrome="";
	string text;
	cin >> text;
	int length = text.size();
	text[length];

	for (int x = length-1; x >= 0; x--) {
		palindrome += text[x];
	}
	if (palindrome == text) {
		cout << "It is palindrome";
	}
	else {
		string palindromeA="";
		for (int a = 0; a <= length; a++) {
			palindromeA = palindrome[length] - palindrome[a];
			if (palindromeA == text) {
				cout << "It is a conditional palindrome";
				break;
			}
		}
	}
	return 0;
}
