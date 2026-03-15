#include <iostream>
using namespace std;
main()
{ 
    cout<<" enter a name1 =";
    string name1;
    cin>>name1;
    cout<<" enter a name2";
    string name2;
    cin>>name2;
    cout<<" enter a name3";
    string name3;
    cin>>name3;
    cout<<" enter a age";
    int age1;
    cin>>age1;
    cout<<" enter a age2";
    int age2;
    cin>>age2;
    cout<<" enter a age3";
    int age3;
    cin>>age3;
    if( age1<<age2)
    {
        cout<<" age1 is youngest";
    }
    if( age2<<age3)
    {
        cout<<" age2 is youngest";
    }
    else
    {
        cout<<" a3 is youngest";
    }
}