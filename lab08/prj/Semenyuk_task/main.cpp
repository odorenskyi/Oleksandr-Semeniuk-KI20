#include <iostream>
#include "ModulesSemenyuk.h"

using namespace std;

double x = 0, y = 0, z = 0;
char a, b;

void devOutput()
{
    cout << "Developer\n"
         << "Semenyuk Olexandr(c)" << endl;
}

void userInput()
{
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
}

void tof_output()
{
    if (a + 1 > abs(b - 2))
    {
        cout << "True!" << endl;
    }
    else
    {
        cout << "False!" << endl;
    }
}

void calcoutput()
{
    cout << "Your result: " << calculations_s(x, y, z) << endl;
}

void intOutput()
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}

void appPause()
{
    system ("pause");
}

int main()
{
    devOutput();
    userInput();
    calcoutput();
    tof_output();
    intOutput();
    appPause();
    return 0;
}
