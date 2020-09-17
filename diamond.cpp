// 2019121_task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void pyramid(int rows);
int main()
{
	int i, rows, j, k;
	cout << "Enter number of rows \n";
	cin >> rows;
	pyramid(rows);
	return 0;
}
void pyramid(int rows)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = rows; j >= i; j--)

			cout << " ";

		for (int k = 1; k <= 2 * i - 1;k++)
			cout << "*";
		cout << endl;
	}

	for (int i = rows - 1;i >= 1;i--)
	{
		for (int j = rows; j >= i; j--)

			cout << " ";

		for (int k = 1; k <= 2 * i - 1;k++)
			cout << "*";
		cout << endl;
	}
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
