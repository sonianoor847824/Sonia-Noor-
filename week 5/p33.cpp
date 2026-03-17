#include<iostream>
using namespace std;
main()
{
    for(int i = 1;i <= 10; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
    for(int i = 10;i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
}