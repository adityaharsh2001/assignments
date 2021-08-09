#include <math.h>
#include <stdio.h>
long long convert(int n);
int main()
{
    system("CLS");
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in binary = %lld ", n, convert(n));
    return 0;
}

long long convert(int n)
{
    long long b = 0;
    int rem, i = 1, step = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        b += rem * i;
        i *= 10;
    }
    return b;
}

