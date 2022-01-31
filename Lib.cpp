
#include <iostream>

#include "Lib.h"

using namespace std;

namespace Lib {

	float* createAndIniArray(const size_t size)
	{
		float* pArray = new (nothrow) float[size];
		if (pArray != nullptr)
		{
			for (size_t i = 0; i < size; i++)
			{
				pArray[i] = (rand() % 100) - 50.0f;
			}
		}
		return pArray;
	}


	void PrintArray(const float* arr, const size_t size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << "";
		}

		cout << endl;
	}

	void PrintArray(const int* arr, const size_t size)
	{
		cout << arr[0];
		for (size_t i = 1; i < size; i++)
		{
			cout << "" << arr[i];
		}

		cout << endl;
	}

	void PrintPosAndNeg(const float* arr, const size_t size)
	{
		setlocale(LC_ALL, "Russian");
		size_t pos = 0, neg = 0;

		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				pos++;
			}
			else if (arr[i] < 0)
			{
				neg++;
			}
		}
		cout << "Положительные: " << pos << endl << "Отрицательные: " << neg << endl;
	}

	#define SWAP_INT(x,y) int temp = x; x=y; y = temp;

	void SortArray(int* arr, const size_t size)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			for (size_t f = 0; f < size - i - 1; f++)
			{
				if (arr[f] > arr[f + 1])
				{
					SWAP_INT(arr[f], arr[f + 1])
				}
			}
		}
	}
}