#include <stdio.h>

double mx_pow(double n, int pow);

int main() {
    double n = -2;
    int pow = 3;
    double i = mx_pow(n, pow);
    printf("%f", i);
    return 0;
}
