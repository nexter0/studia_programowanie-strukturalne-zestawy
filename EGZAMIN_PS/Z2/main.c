#include <stdio.h>
#include <math.h>

double fun(double x, unsigned n);

int main() {
    printf("Wynik: %lf\n", fun(3,5));
    return 0;
}

double fun(double x, unsigned n)
{
    double result = 0;
    for(int i = 1; i <= n; i++)
    {
        result += pow(-1, i) * (pow(x, i)/i);
    }
    return 1 + result;
}
