
#include <iostream>

using namespace std;

void __fastcall MyFunc(const int arr[], const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

}

void __fastcall inverseMyFunc(int arr[], const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (arr[i] == 1) ? 0 : 1;
	}
}

int main()
{
	const size_t size = 4;
	int arr[size] = { 1, 1, 0, 0 };

	MyFunc(arr, size);
	inverseMyFunc(arr, size);
	MyFunc(arr, size);

	cout << endl;

}