#include <iostream>

using namespace std;

inline int prod(int x, int y)
{

    return x * y;
}
int main()
{
    int a, b;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    cout << "The producct of a and b is: " << prod(a, b);
    return 0;
}