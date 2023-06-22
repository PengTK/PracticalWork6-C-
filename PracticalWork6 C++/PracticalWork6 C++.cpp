#include <iostream>
#include <windows.h>
#include "..\DynamicLib\pch.h"
using namespace std;


typedef bool (*FindCharsFunc)(const char*, const char*);

int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    string chars;
    cout << "Введите текст: ";
    cin >> str;
    cout << "Введите символы для поиска: ";
    cin >> chars;

    HINSTANCE lib = LoadLibrary(TEXT("DynamicLib.dll"));

    FindCharsFunc findChars = (FindCharsFunc)GetProcAddress(lib, "findChars");
 

    bool result = findChars(str.c_str(), chars.c_str());
    cout << "Результат: " << (result ? "true" : "false") << endl;

    FreeLibrary(lib);

    return 0;
}