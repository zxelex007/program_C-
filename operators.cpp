#include <iostream>

using namespace std;

int main()
{
    int a=5,b=10;
    cout<<"Following are the Operators of C++:\n";
    // ARITHMETIC OPERATORS
    cout<<"The value of a + b is : "<<a + b<<"\n";
    cout<<"The value of a - b is : "<<a - b<<"\n";
    cout<<"The value of a / b is : "<<a / b<<"\n";
    cout<<"The value of a * b is : "<<a * b<<"\n";
    cout<<"The value of a % b is : "<<a % b<<"\n";// Thsi will return the remainder
    cout<<"The value of a++ is : "<<a++<<"\n";
    cout<<"The value of a-- is : "<<a--<<"\n";
    
    // COMPARISON OPERATORS
    // 0 --> False
    // 1 --> True
    cout<<"Following are the Comparison Operators of C++:\n";
    cout<<(a==b)<<"\n";// This wil return True if a is equal to b else False.
    cout<<(a!=b)<<"\n";// This wil return True if a is not equal to b else False.
    cout<<(a>b)<<"\n";// This wil return True if a is greater than b else False.
    cout<<(a<b)<<"\n";// This wil return True if a is less than b else False.
    cout<<(a>=b)<<"\n";// This wil return True if a is greater than or equal to b else False.
    cout<<(a<=b)<<"\n";// This wil return True if a is less than or equal to b else False.

    // LOGICAL OPERATORS
    cout<<"Following are the Logical Operators of C++:\n";
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 
    return 0;
}
