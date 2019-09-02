#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////
void square_and_cube(int n);
int max_five(int a, int b, int c, int d, int e);
/////////////////////////////////////////////////////////////////////
int main()
{
    int a, b, c, d, e, max, n;

    printf("Enter five integer:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, & d, &e);

    max = max_five(a, b, c, d, e);

    printf("Max %d and %d, %d, %d, %d = %d\n", a, b, c, d, e, max);

    printf("Enter an integer:\n");
    scanf("%d", &n);
    square(n);

    return 0;
}
/////////////////////////////////////////////////////////////////////
void square_and_cube(int n)
{
    int i, i2, i3;
    for(i = 1; i <= n; i++)
    {
        i2 = i * i;
        i3 = i2 * i;
        printf("%4d %4d %5d\n", i, i2, i3);
    }
}
/////////////////////////////////////////////////////////////////////
int max_five(int a, int b, int c, int d, int e)
{
    int max = b;

    if(a > b)
        max = a;

    if(c > max)
        max = c;

    if(d > max)
        max = d;

    if(e > max)
        max = e;

    return max;
}
