
#include <iostream>
#include <fstream>

#include "Lib.h"


using namespace std;

//=================

inline void task1()
{
    const short size = 10;
    const float* arr = Lib::createAndIniArray(size);

    if (arr != nullptr)
    {
        Lib::PrintArray(arr, size);
        Lib::PrintPosAndNeg(arr, size);

        delete[] arr;
    }
}

//=================

#define IN_RANGE(x,y) ((x >= 0 && x < y) ? "true" : "false")

inline void task2()
{
    int num;
    cin >> num;
    cout << IN_RANGE(num, 10) << endl;
}

//=================

#define ARR_SIZE 10

inline void task3()
{
    setlocale(LC_ALL, "Russian");

    int* arr = new (nothrow) int[ARR_SIZE];

    if (arr != nullptr)
    {
        cout << "Введите " << ARR_SIZE << " чисел: " << endl;
        for (size_t i = 0; i < ARR_SIZE; i++)
        {
            cin >> arr[i];
        }

        Lib::SortArray(arr, ARR_SIZE);
        Lib::PrintArray(arr, ARR_SIZE);

        delete[] arr;
    }
}

int main()
{

    task3();

    task1();

    task2();

    return 0;
}