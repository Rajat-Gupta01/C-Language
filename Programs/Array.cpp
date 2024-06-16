#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    //     int A[20] = {2, 4, 6, 8, 0, 67, 87, 9};
    //     // A[0] = 12;
    //     // A[1] = 122;
    //     // A[2] = 112;
    //     // A[3] = 2;
    //     // cout << sizeof(A) << endl;
    //     // cout << A[10] << endl;
    //     // printf("%d\n", A[20]);
    // //===============================for each loop
    //     for(int x:A){
    //         cout << x << endl;
    //     }

    int n;
    cout << "Enter Size";
    cin >> n;
    int A[n];
    A[0] = 2;

    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}