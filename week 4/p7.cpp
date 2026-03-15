#include <iostream>
using namespace std;
main()
{
    cout<<" enter the number";
    int number,even;
    cin>>number;
    even = number%2;
    if( even == 0){
    cout<<" the number is even";
    }
    else{
        cout<<" the number is odd";
    }
}