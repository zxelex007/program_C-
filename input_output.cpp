#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    // << is called insertion operator
    cout<< "Enter the value the value of num1: \n";
    
    cin>>num1;// >> is called extraction operator.

    cout<< "Enter the value the value of num2: \n";
    cin>>num2;
    
    cout<<"The sum is: "<<num1+num2;
    return 0;
}
