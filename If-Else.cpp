#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Tell me Your age:\n";
    cin>>age;
    if (age>=18)
    {
        cout<<"Yes, you are eligible to drive the car.";
    }
    else
    {
        cout<<"No, you are not eligible to drive the car ";
    }
    return 0;
}
