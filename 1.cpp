#include <cmath>
// 1 заданик
// 1
int a,b,c,x,y;

double result = sin(5 * x) + 2 * tan(pow(x, 2));
// 2
double result = 2 * x + 3 * pow(y, 2) - sin(3 * x);
// 3
double result = sqrt(sin(pow(y, 2))) / sqrt(2 * cos(2 * y)) + 2 * abs(tan(y) - 25);
// 4
double result = sqrt(1 - 2 / pow(x, 2)) + abs(pow(x, 5) - 3 * x);
// 5
double result = (2 * x * y + 4 * pow(x, 2)) / (5 * y);
// 6
double result = 4 * sqrt(cos(3 * b) - 2 * sin(b));
// 7
double result = -2 * cos(pow(x, 2)) + 2 * pow(y, 7);
// 8
double result = abs(2 * a + tan(3 * a)) / sqrt(1 + pow(b, 8) + 11);

// 2 задание:
double s = pow(x, 3) * pow(tan(x + b), 2) + a / sqrt(x + b);

double d = (b * pow(x, 2) - a) / (exp(a * x) - 1);