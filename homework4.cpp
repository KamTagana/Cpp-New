

#include <iostream>
using namespace std;


int main()
{
	//=======================================================
	//Task 1
	//=======================================================
	
	cout << "Enter a number one: ";
	int num1;
	cin >> num1;

	int num2;
	cout << "Enter a number two: ";
	cin >> num2;

	int answer = num1 + num2;
	

		if (answer >= 10 && answer <= 20)
		{
			cout << "Task1 = true" << endl;
		}
		else
		{
			cout << "Task1 = false" << endl;
		}
	
	//=======================================================
	//Task 2
	//=======================================================

		const int number1 = 5;
		const int number2 = 5;

		if (number1 == 10 && number2 == 10 || number1 + number2 == 10)
		{
			cout << "Task2 = true" << endl;
		}
		else
		{
			cout << "Task2 = false" << endl;
		}

	//=======================================================
	//Task 3
	//=======================================================

		for (int i = 1; i <= 50; i = i + 2)
		{
			cout << i << " ";
		}
		

	//=======================================================
	//Task 4
	//=======================================================

		
}
