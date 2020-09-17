// 2019121_Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
using namespace std;
int main()
{
	int x, i, j, e = 0, o = 0, pctr = 0;
	cout << "::Enter numbers to check whether it is even,,odd and prime or Enter a negative number to exit:: " << endl;
	cin >> x;


	while (x >= 0)
	{
		if (x % 2 == 0)
			e++;
		if (x % 2 != 0)
			o++;
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
		cout << "Enter a number" << endl;
		cin >> x;

	}

	cout << "Total numbers are = " << e + o << endl;
	cout << "Th even numbers are = " << e << endl;
	cout << "Th odd numbers are = " << o << endl;
	cout << "The prime numbers are = " << pctr << endl;
	return 0;



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
