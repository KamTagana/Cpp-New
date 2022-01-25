
#include <iostream>

using namespace std;


void __fastcall MyFunc(const double arr[], const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

}

int main()
{
	const size_t size = 5;
	double arr[] = { 11.1, 12.2, 13.3, 14.4, 15.5 };

	MyFunc(arr, size);

	cout << endl;
}
