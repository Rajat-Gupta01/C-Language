#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *p;
    p = &a;
    cout << p<<endl;
    printf("using pointer %d", p);
    cout << a;

    return 0;
}