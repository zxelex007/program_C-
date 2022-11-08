#include<iostream>

using namespace std;

int fact(int n){
    if (n<=1)
    {
        return 1;
    }
    
    return n * fact(n-1);
    // Step by step calculation of factorial(4)
    // factorial(4) = 4 * factorial(3); 
    // factorial(4) = 4 * 3 * factorial(2);
    // factorial(4) = 4 * 3 * 2 * factorial(1);
    // factorial(4) = 4 * 3 * 2 * 1;
    // factorial(4) = 24;
}

int main(){
    int num;
    cout<<"Enter the num: "<<endl;
    cin>>num;
    cout<<"The Factorial of the number is: "<<fact(num);
    return 0;

}