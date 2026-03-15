#include <iostream>
using namespace std;
main()
{
    cout<<" please enter the number";
    int number1;
    cin>>number1;
    cout<<" enter the second number";
    int number2;
    cin>>number2;
    if( number1<number2){
    cout<<" number "<<number2<<" is greater then"<<number1;
    }
    else{
        cout<<" number "<<number1<<" is greater then "<<number2;
    }
}