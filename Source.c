#include <stdio.h>
#include <math.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y, z, a;
    double numerator, denominator;

    x = 3.981e-2;   
    y = -1.625e3; 
    z = 0.512;

    numerator = pow(2, -x) * sqrt(x + 4 * sqrt(y));

    denominator = cbrt(exp(x - 1 / sin(z)));

    a = numerator / denominator;

    printf("Исходные данные:\n");
    printf("x = %.6f\n", x);
    printf("y = %.6f\n", y);
    printf("z = %.6f\n", z);
    printf("\nПромежуточные вычисления:\n");
    printf("2^{-x} = 2^(%.6f) = %.6f\n", -x, pow(2, -x));
    printf("sqrt(y) = sqrt(%.6f) = %.6f\n", y, sqrt(y));
    printf("4sqrt(y) = %.6f\n", 4 * sqrt(y));
    printf("x + 4sqrt(y) = %.6f\n", x + 4 * sqrt(y));
    printf("sqrt(x + 4sqrt(y)) = %.6f\n", sqrt(x + 4 * sqrt(y)));
    printf("Числитель = %.6f\n", numerator);
    printf("\n1/sin z = 1/sin(%.6f) = %.6f\n", z, 1 / sin(z));
    printf("x - 1/sin z = %.6f\n", x - 1 / sin(z));
    printf("e^{x - 1/sin z} = %.6f\n", exp(x - 1 / sin(z)));
    printf("(cbrt e^{x - 1/sin z}) = %.6f\n", denominator);
    printf("\nРезультат вычисления:\n");
    printf("a = %.6f\n", a);
    printf("Ожидаемый результат: 1.26185\n");
    printf("Разница: %.6f\n", a - 1.26185);

    return 0;
}
