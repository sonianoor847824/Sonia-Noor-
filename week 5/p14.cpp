#include<iostream>
using namespace std;
main()
{
    char ch = 'y';
    while( ch  == 'N' && ch  == 'n');
    {
       cout<<" i am happy !" << endl;
       cout<< " enter your choice ";
       cin >> ch;
    }
}