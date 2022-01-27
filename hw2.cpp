

#include <iostream>

using namespace std;


void Matrix(int** array, const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t f = 0; f < size; f++)
		{
			cout << array[i][f] << " ";
		}
		cout << endl;
	}
}

void iniMatrix(int** pMatrix, const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t f = 0; f < size; f++)
		{
			pMatrix[i][f] = rand() % 100;
		}
	}
}

int main()
{
	srand(time(NULL));
	const size_t size = 4;
	int** pMatrix = new int* [size];
	for (size_t i = 0; i < size; i++)
	{
		pMatrix[i] = new int[size];
	}

	iniMatrix(pMatrix, size);
	cout << endl;
	Matrix(pMatrix, size);

	for (size_t i = 0; i < size; i++)
	{
		delete[] pMatrix[i];
	}

	delete[] pMatrix;
}
