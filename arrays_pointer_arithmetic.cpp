#include<iostream>

using namespace std;
 
int main(){
    int num[] = {1,2,3,4,5};
    // for (int i=0; i <=4; i++)
    // {
    //     cout<<num[i]<<endl;
    // }

    // POINTERS WITH AN ARRAY
    int* p = num;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    
    return 0;

}