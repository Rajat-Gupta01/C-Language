#include <iostream>
#include <math.h>
using namespace std;

int is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if ((n == 2 || n == 3) || (n % 2 == 0 || n % 3 == 0))
    {
        return false;
    }
    // for (int i = 5; i * i <= n;i=i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    is_prime(11) ? cout << "true\n" : cout << "false\n";
    return 0;
}
