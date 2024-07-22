#include <iostream>
using namespace std;

long long factorial(int n)
{
    // Base case - If n is 0 or 1, return 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
        return n * factorial(n - 1);
}

int main()
{
    int num = 40;
    // printing the factorial
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;

    return 0;
}