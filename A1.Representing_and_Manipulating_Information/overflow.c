#include <stdio.h>
#include <stdint.h>
#include <limits.h>

#define KSIZE 1024

int main(void)
{
        int x0 = 200 * 300 * 400 * 500;
        int x1 = (500 * 400) * (300 * 200);
        int x2 = ((500 * 400) * 300) * 200;
        int x3 = 400 * (200 * (300 * 500));
        printf("x0 = %d, x1 = %d, x2 = %d, x3 = %d\n", x0, x1, x2, x3);

        double f1 = (3.14 + 1e20) - 1e20;
        double f2 = 3.14 + (1e20 - 1e20);
        printf("f1 = %g, f2 = %g\n", f1, f2);

        int x = -2147483648;
        printf("%d\n", x == INT_MIN);
        printf("%d\n", x);
        printf("%d\n", KSIZE < INT_MIN);

        double d = 1e10;
        int dx = (int) d;
        printf("dx is %d\n", dx);

        return 0;
}
