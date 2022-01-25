

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

bool __fastcall Array(int* arr, const size_t size)
{
    const int step = 3;
    
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = i * step + 1;
    }
    return true;
}

int main()
{
    const size_t size = 8;
    int arr[size];

    if (Array(arr, size))
    {
        
        MyFunc(arr, size);
        cout << endl;
    }
}

