#include <iostream>
using namespace std;
main()
{
    cout<<" enter a number";
    int number1;
    cin>>number1;
    char op;
    cout<<" enter a operator";
    cin>>op;
    cout<<" enter a number2";
    int number2;
    cin>>number2;
    int calculator;
    if( op == '+')
    {
        calculator=number1+number2;
        cout<< number1<<op<<number2<<" ="<<calculator;
    }
        if( op == '-')
    {
         calculator =number1-number2;
         cout<<number1<<op<<number2<<" = "<<calculator;
    } 
         if( op == '*')
    {
        calculator=number1*number2; 
        cout<<number1<< op<<number2<<" = "<<calculator;
    }
       if( op == '/')
    {
        calculator=number1/number2;
        cout<<number1<<op<<number2<<" = "<<calculator;
    }   
}