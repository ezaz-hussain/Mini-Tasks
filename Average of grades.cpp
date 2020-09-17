// 2019121_Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int marks;
	float total = 0;
	float total_values = 0;

	float average = 0;

	int present_marks2 = 0;
	int present_marks3 = 0;
	int flag = 0;

	cout << "Enter Your marks or -100 to quit." << endl;
	cin >> marks;

	while (marks != -100)
	{
		total = total + marks;
		total_values++;


		while (marks != -100) {

			cout << "Enter your marks or -100 to quit." << endl;
			cin >> marks;
			for (;marks > 0;)
			{
				present_marks2 = marks;
				total = total + marks;
				total_values++;
				break;
			}
			cout << "Enter Your marks or -100 to quit." << endl;
			cin >> marks;
			for (;marks > 0;)
			{
				total = total + marks;
				present_marks3 = marks;
				total_values++;

				break;
				cin >> marks;
			}

			if (present_marks2 == present_marks3 && present_marks2 == marks && present_marks3)
			{

				cout << "Error :'You cannot enter consecutive same marks'." << endl;
				cout << "Results" << endl;
				cout << "-------------------------------------------------" << endl;
				break;
			}
			if (total_values >= 100)
			{
				cout << "The input numbers should not exceed by 100 ::" << endl;
				cout << "Results" << endl;
				cout << "------------------------------------------" << endl;

				break;

			}
			if (marks >= -100)
			{
				flag = false;
			}


		}
		break;

	}
	cout << "Total of numbers entered =" << total << endl;
	cout << "Total values entered = " << total_values << endl;

	average = float(total / total_values);
	cout << "The Avergae is = " << average << endl;


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
