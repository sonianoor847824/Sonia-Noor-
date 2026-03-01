#include<iostream>
using namespace std; 
main()
{ 
    cout<<"enter a 4 digit number:" ; 
    int digit,digit2,digit3, digit4,d1,d2,d3,d4,sum;
    cin>>digit;
    d1=digit%10;
    digit2=digit/10;
    
    d2=digit2%10;
    digit3=digit2/10;

    d3=digit3%10;
    digit4=digit3/10;

    d4=digit4%10;

    sum=d1+d2+d3+d4;
    cout<<"enter the sum is= "<<sum;
}