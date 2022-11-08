#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// CALL BY REFERENCE USING POINTERS
void swapPointer(int *a, int *b)
{                  // temp a b
    int temp = *a; // 4   4  5
    *a = *b;       // 4   5  5
    *b = temp;     // 4   5  4
}

int main()
{

    int a = 4, b = 5;
    swapPointer(&a, &b);
    cout << "The sum of 4 and 5 is: " << sum(a, b);
    return 0;
}