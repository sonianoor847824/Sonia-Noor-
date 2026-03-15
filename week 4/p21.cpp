#include <iostream>
using namespace std;
main()
{ 
    cout<<" enter speed ";
    float speed;
    cin>>speed;
    if( speed <= 10)
    {
        cout<<" slow!";
    }
    if( speed >= 10 && speed <= 50)
    {
        cout<<" average ";
    }
    if( speed >= 50 && speed <= 150)
    {
    cout<<" fast ";   
    }
    if( speed >= 150 && speed <= 1000)
    {
        cout<<" ultra fast ";
    }
    if( speed > 1000 )
    {
        cout<<" exteremely fast ";
    }
}    