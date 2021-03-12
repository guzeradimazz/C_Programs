//
//  main.c
//  2.2.6program
//
//  Created by Дима Гузерчук on 12.03.21.
//

#include <stdio.h>
#include <math.h>
 
int main()
{
    double x = 0.0, element, sum = 0.0, epsylon;
    int i = 1;
    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите epsylon: ");
    scanf("%lf", &epsylon);
    double sinus = sin(x), rs = 1 + epsylon;
    element = x;
    for (i = 1; rs > epsylon; i++)
    {
        sum += element;
        element *= (-1) * x * x / (2 * i) / (2 * i + 1);
        rs = fabs(sinus - sum);
    }
    int n = i;
    printf("x = ");
    printf(" sin(%lf) = ", x);
    printf("%lf\n", sum);
    printf("\nПри n = %d исследуемое выражение отличается от sin x менее, чем на заданную погрешность\n", n);
    return 0;
}
