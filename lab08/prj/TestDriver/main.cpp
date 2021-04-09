#include <iostream>
#include "ModulesSemenyuk.h"

using namespace std;

int main()
{
    float mathExpected[10][3]={{7, 5, 3}, {51, 4, 92}, {4.6, 6.7, 1.3}, {12, 20, 48}, {15, 4, 7}, {7, 6, 1}, {16, 7, 14}, {5, 6, 7}, {6, 1, 7}, {9, 4, 6}};
    float Expected[10] = {0.568386, 3.05333, 879.765, 3701.93, 30.0199, 0.23719, 1783.16, 713.408, 3.53781, 41.7889};
    for (int i = 0; i < 10; i++)
    {
        cout << "Testcase#" << i + 1 << ": " << calculations_s(mathExpected[i][0], mathExpected[i][1] ,mathExpected[i][2]);
        if (calculations_s(mathExpected[i][0], mathExpected[i][1], mathExpected[i][2]) == calculations_s(mathExpected[i][0], mathExpected[i][1], mathExpected[i][2]))
        {
            cout << "   PASSED!" << endl;
        }
        else
        {
            cout << "   FAILED!" << endl;
        }
    }
    system("pause");
    return 0;
}
