#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

//1
int main() {
const char pepe = 'p';
const string pepe_str = "pepe";
int d;
int s = pow(2, 3) + pow(3, 2);
long l = 1231223123;
bool b = true;
int zas[] = {1, 2, 3, 4, 5};
float f = 3.14;
double dd = 2.71828;
long double ld = 1.6180339887;
enum Color { RED, GREEN, BLUE };
int mass[3] = {'a', 'b', 'c'};
char mass_char[3] = {'a', 'b', 'c'};

printf("%c\n", pepe);
printf("%s\n", pepe_str.c_str());
printf("%s\n", pepe_str.substr(0, 3).c_str());
printf("%d\n", s);
printf("%ld\n", l);
printf("%d\n", b);
printf("%f\n", f);
printf("%lf\n", dd);
printf("%Lf\n", ld);
printf("%d\n", zas[2]);
printf("%d\n", RED);
printf("%d\n", GREEN);
printf("%d\n", BLUE);
printf("%d\n", mass[0]);
printf("%d\n", mass[1]);
printf("%d\n", mass[2]);
printf("%c\n", mass_char[0]);
printf("%c\n", mass_char[1]);
printf("%c\n", mass_char[2]);
//2



return 0;
}