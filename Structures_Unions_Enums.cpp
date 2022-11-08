#include<iostream>

using namespace std;
typedef struct employee
{
    int e_Id;
    int e_salary;                     //  THESE ARE SIMILAR TO THE CLASSES IN THE PYTHON.
    char favchar;

} ep;

int main(){
    ep anonymous;
    anonymous.e_Id = 1;
    anonymous.e_salary = 350000;
    anonymous.favchar = 'h';
    cout<<anonymous.e_Id<<endl;
    cout<<anonymous.e_salary<<endl;
    cout<<anonymous.favchar<<endl;
    return 0;

}