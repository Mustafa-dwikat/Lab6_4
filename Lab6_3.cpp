#include <iostream>
using namespace std;
int main() {
	int number, hundreds, onse, tens, revers;
	cout << "enter a 3-digit number : ";
	cin >> number;
	if (number % 1000 == 0) {
		hundreds = number / 100;
		onse = number % 10;
		tens = (number / 10) % 10;
		revers = (onse * 100) + (tens * 10) + hundreds;
		cout << "The number in revers is : " << revers;
	}
	else if (number / 100 == 0)
		cout << "A 3-digit number pls ? ";
	else cout << "A 3-digit number pls ? ";
} 

	//tens = number / 10 - (hundreds * 10); cout << onse * 100 + tens * 10 + hundreds;
	//tens = (number % 100) - onse ; cout << onse * 100 + tens + hundreds
