// 2019121_Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int odd(int x);
int even(int x);
int prime(int x);
int perfectsquare(int x);
int y, e = 0, o = 0, p = 0, pctr = 0, pr = 0, perfect = 0;
int main()
{
	int x;
	cout << "::Enter numbers to check whether it is even,odd,prime and perfect square or Enter a negative number to exit:: " << endl;
	cin >> x;
	while (x >= 1)
	{

		e = even(x);
		o = odd(x);
		p = prime(x);
		perfect = perfectsquare(x);


		cout << "Enter number" << endl;
		cin >> x;

	}

	cout << "Total numbers are = " << e + o << endl;
	cout << "The even numbers are = " << e << endl;
	cout << "The odd numbers are = " << o << endl;
	cout << "The prime numbers are = " << p << endl;
	cout << "The perfect squares are = " << perfect << endl;
}
int odd(int x)
{

	if (x % 2 != 0) {
		o++;
	}
	return o;


}
int even(int x)
{

	if (x % 2 == 0) {
		e++;

	}
	return e;
}
int prime(int x)
{
	int i, j;
	j = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			j++;
		}


	}
	if (j == 0) {
		pctr++;

	}
	return pctr;
}
int perfectsquare(int x)
{
	for (y = 1;y <= x;y++)
		if (y * y == x)
		{
			pr++;
		}

	return pr;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
