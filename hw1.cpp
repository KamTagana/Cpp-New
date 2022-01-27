

#include <iostream>

using namespace std;




void Array(int* array, size_t arraySize)
{
    for (size_t i = 0; i < arraySize; i++)
    {
        cout << array[i] << "";
    }
    cout << endl;
}

void iniArray(int* arr, const size_t size)
{
    arr[0] = 1;
    for (size_t i = 1; i < size; i++)
    {
        arr[i] = arr[i - 1] << 1;
    }
}

int main()
{
    const size_t size = 10;
    int* arr = new (nothrow) int[size];

    if (arr != nullptr)
    {
        iniArray(arr, size);
        Array(arr, size);
        delete[] arr;
    }
}

