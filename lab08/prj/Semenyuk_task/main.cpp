#include <iostream>
#include "ModulesSemenyuk.h"
#include <clocale>
#include <wchar.h>
#include <windows.h>
#include <fcntl.h>

using namespace std;

double x = 0, y = 0, z = 0;
char a, b;

void localisation()
{
    _wsetlocale(LC_ALL, L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
}

void devOutput()
{
    wcout << L"Розробник\n"
         << L"Семенюк Олександр(c)" << endl;
}

void userInput()
{
    while (x <= 3)
    {
        wcout << L"x: ";
        cin >> x;
        if (x <= 3)
        {
            wcout << L"Помилка! Значення \"x\" повинно бути більшим ніж \"3\"" << endl;
        }
    }
    wcout << L"y: ";
    cin >> y;
    wcout << L"z: ";
    cin >> z;
    wcout << L"A: ";
    cin >> a;
    wcout << L"B: ";
    cin >> b;
}

void tof_output()
{
    if (a + 1 > abs(b - 2))
    {
        wcout << L"True!" << endl;
    }
    else
    {
        wcout << L"False!" << endl;
    }
}

void calcOutput()
{
    wcout << L"Результат: " << calculations_s(x, y, z) << endl;
}

void intOutput()
{
    wcout << L"x: " << x << endl;
    wcout << L"y: " << y << endl;
    wcout << L"z: " << z << endl;
}

void appPause()
{
    system ("pause");
}

int main()
{
    localisation();
    devOutput();
    userInput();
    calcOutput();
    tof_output();
    intOutput();
    appPause();
    return 0;
}
