#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <bitset>
#include <math.h>
#include "ModulesSemenyuk.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "--------------------------------\n"
         << "-           Розробник          -\n"
         << "-       Семенюк Олександр-     -\n"
         << "- ЦНТУ, Кропивницький, Україна -\n"
         << "-             2021             -\n"
         << "--------------------------------\n\n";

    char checkbox;

    while (true)
    {
        cout << "Оберіть дію: ";
        cin >> checkbox;
        if (checkbox == 'k')
            {
                int a = 0, b = 0, c = 0;
                cout << "A: ";
                cin >> a;

                cout << "B: ";
                cin >> b;

                cout << "C: ";
                cin >> c;

                cout << "Результат: " << calculations_s(a, b, c) << endl;
            }
            if(checkbox == 'h')
            {
                deposit();
            }
            if(checkbox == 'g')
            {
                weather();
            }
            if(checkbox == 'f')
            {
                binaryNum();
            }
            if(checkbox == 'c' || checkbox == 'D' || checkbox == 'd')
            {
                break;
            }
            else{
                Beep(500,500);
            }
        }
        return 0;
    }

