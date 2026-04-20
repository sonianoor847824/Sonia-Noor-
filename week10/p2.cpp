#include<iostream>
#include<cmath>
using namespace std;
int power( int base,int exponent)
{
    int result =1;
    for(int i=1;i <= exponent; i++)
    {
        result = result*base;
    }
    return result;
}
main()
{
    int num1,num2,result;
    cout <<" enter the base number ";
    cin >> num1;
    cout <<" enter the exponent ";
    cin >> num2; 
    result = power(num1,num2);
    cout <<" result "<<result <<endl;
    return 0;
}
