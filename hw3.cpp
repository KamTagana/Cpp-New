

#include <iostream>
#include <fstream>

using namespace std;


void CreateTextFile(const string& fn, const string& str)
{
    ofstream fout;
    fout.open(fn);
    if (fout.is_open())
    {
        fout << str;
        fout.close();
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите имя первого файла: ";
    string f1, f2;
    cin >> f1;
    cout << "Введите имя второго файла: ";
    cin >> f2;

    const string str1 = "Привет, меня зовут Влад и пытаюсь понять основы C++ :)";
    CreateTextFile(f1, str1);

    const string str2 = "Привет, меня зовут Влад и пытаюсь понять основы C++ :)";
    CreateTextFile(f2, str2);
}

