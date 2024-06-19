#include <stdio.h>
#include <math.h>
int Isprime(int n)
{
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter number= ");
    scanf("%d", &n);
    int ans = Isprime(n);
    if (ans == 1)
        printf("yes");
    else
        printf("no");

    return 0;
}