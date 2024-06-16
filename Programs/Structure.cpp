#include <stdio.h>
#include <iostream>

using namespace std;
struct Rectangle
{
    int length;
    int bredth;
    char x;
} r1, r2, r3, r4;
// ===================padding is done in structure to adjust the memory
// struct Rectangle r1;

int main()
{
    r1 = {10, 20};

    printf("%d\n", sizeof(r1));
    r1.length = 1000;
    cout << r1.length << endl;
    cout << r1.bredth << endl;
    return 0;
}
