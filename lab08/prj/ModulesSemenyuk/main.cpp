#include <math.h>

double calculations_s(double x, double y, double z)
{
    double s = pow(3 * sin(sqrt(12 * x + log10(x - 3))), y) + z/x;
    return s;
}
