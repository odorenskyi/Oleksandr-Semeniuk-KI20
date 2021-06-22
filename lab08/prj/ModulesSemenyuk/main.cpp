#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <bitset>
#include <math.h>
using namespace std;

double calculations_s(double x, double y, double z)
{
    double s = pow(3 * sin(sqrt(12 * x + log10(x - 3))), y) + z/x;
    return s;
}

void deposit()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float annualRate = 0;
    float depositSum = 0;
    float profit = 0;

    int monthAmount = 0;

    cout << "Сума депозиту: ";
    cin >> depositSum;

    while (true)
    {
        if (depositSum <= 0)
        {
            cout << "Помилка! Введіть валідні дані: ";
            cin >> depositSum;
        }

        else
        {
            break;
        }
    }

    cout << "Вкажіть кількість місяців (6 або 12): ";
    cin >> monthAmount;

    while(true)
    {
        if(monthAmount == 6 || monthAmount == 12)
        {
            break;
        }

        else
        {
            cout << "Помилка! Введіть валідні дані: " ;
            cin >> monthAmount;
        }
    }

    switch (monthAmount)
    {
        case 6: annualRate = 16;
            break;
        case 12: annualRate = 18;
            break;
    }

    cout << "Сума за місяць: ";

    profit = (depositSum * (annualRate / 100)  / 12 * monthAmount) / monthAmount;

    cout << profit << endl;

    cout << "Сума за весь час: ";

    profit = depositSum * (annualRate / 100)  / 12 * monthAmount;

    cout << profit << endl;
}

void weather()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int SpeedBeaufs[31];
    float SpeedMeters[31];

    for (int i = 0; i < 31; i++)
    {
        SpeedBeaufs[i] = 0;
    }

    for (int i = 0; i < 31; i++)
    {
        cout << "Введіть показники за " << i + 1 << " число: ";
        cin >> SpeedMeters[i];
    }

    for (int i = 0; i < 31; i++)
    {
        if(SpeedMeters[i] < 0.3)
        {
            SpeedBeaufs[i] = 0;
        }
        if(SpeedMeters[i] >= 0.3 && SpeedMeters[i] <= 1.5)
        {
            SpeedBeaufs[i] = 1;
        }
        if(SpeedMeters[i] >= 1.6 && SpeedMeters[i] <= 3.3)
        {
            SpeedBeaufs[i] = 2;
        }
        if(SpeedMeters[i] >= 3.4 && SpeedMeters[i] <= 5.4)
        {
            SpeedBeaufs[i] = 3;
        }
        if(SpeedMeters[i] >= 5.5 && SpeedMeters[i] <= 7.9)
        {
            SpeedBeaufs[i] = 4;
        }
        if(SpeedMeters[i] >= 8.0 && SpeedMeters[i] <= 10.7)
        {
            SpeedBeaufs[i] = 5;
        }
        if(SpeedMeters[i] >= 10.8 && SpeedMeters[i] <= 13.8)
        {
            SpeedBeaufs[i] = 6;
        }
        if(SpeedMeters[i] >= 13.9 && SpeedMeters[i] <= 17.1)
        {
            SpeedBeaufs[i] = 7;
        }
        if(SpeedMeters[i] >= 17.2 && SpeedMeters[i] <= 20.7)
        {
            SpeedBeaufs[i] = 8;
        }
        if(SpeedMeters[i] >= 20.8 && SpeedMeters[i] <= 24.4)
        {
            SpeedBeaufs[i] = 9;
        }
        if(SpeedMeters[i] >= 24.5 && SpeedMeters[i] <= 28.4)
        {
            SpeedBeaufs[i] = 10;
        }
        if(SpeedMeters[i] >= 28.5 && SpeedMeters[i] <= 32.6)
        {
            SpeedBeaufs[i] = 11;
        }
        if(SpeedMeters[i] > 32.6)
        {
            SpeedBeaufs[i] = 12;
        }
    }

    int maxValue = SpeedBeaufs[0];

    for (int i = 0; i < 31; i++)
    {
        if (SpeedBeaufs[i] > maxValue)
        {
            maxValue = SpeedBeaufs[i];
        }
    }

    cout << endl << maxValue << " Бофортів" << endl;
}

void binaryNum()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string numBinary = "";
    int numDecimal = 0;
    int binZero = 0;

    while (true)
    {
        cout << "Введіть число від 0 до 90080000: " << endl;
        cin >> numDecimal;
        if (numDecimal >= 0 && numDecimal < 90080000)
        {
            break;
        }
        else
        {
            cout << "Помилка! Ваше число виходить за вказані межі! Спробуйте ще раз!" << endl;
        }
    }

    numBinary = bitset<16>(numDecimal).to_string();
    cout << numBinary << endl;

    int i = 0;

    while (numBinary[i])
    {
        if (numBinary[i] == '0') binZero++;
        i++;
    }

    cout << "            ^13 біт!" << endl;
//    cout << "13 BIT: " << numBinary[numBinary.length() - 13] << endl;

    if (numBinary[12] == '0')
    {
        cout << "Результат: " << binZero << endl;
    }

    else
    {
        cout << "Результат: " << 16 - binZero << endl;
    }
}
