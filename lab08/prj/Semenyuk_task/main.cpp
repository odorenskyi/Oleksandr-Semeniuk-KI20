#include <iostream>
#include "ModulesSemenyuk.h"
#include <clocale>
#include <wchar.h>
#include <windows.h>
#include <fcntl.h>
#include <iomanip>

using namespace std;

double x = 0, y = 0, z = 0;
char a = L'\0', b = L'\0';

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
            wcout << L"Помилка! Значення \"x\" повинно бути бiльшим нiж \"3\"" << endl;
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
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    int a = (int) x, b = (int) y, c = (int) z;
    cout << "x(HEX): " << hex << a << endl;
    cout << "y(HEX): " << hex << b << endl;
    cout << "z(HEX): " << hex << c << endl;
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
