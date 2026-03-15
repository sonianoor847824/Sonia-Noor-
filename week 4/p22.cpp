#include <iostream>
using namespace std;
main()
{
    cout<<" enter the shape of shape";
    string shape;
    cin>>shape;
    int area,length,breadth;
    int pi=3.14;
    if( shape == " square")
    {
       cout<<" enter the length of squre ";
       cin>>length;
       area=length*length;
    }
    if( shape == " rectangle")
    {
        cout<<" enter the length of rectangle ";
        cin>>length;
        cout<<" enter the breadth of rectangle";
        cin>>breadth;
        area=length*breadth;
    }
    if( shape == " circle ")
    {
        cout<<" enter radius of circle ";
        cin>>length;
        area=pi* length * length;
    }
    {
        cout<<" enter length of triangle";
        cin>>length;
        cout<<" enter bradth of triangle";
        cin>>breadth;
        area =9.5*length*breadth;
    }
    cout<<" shape name is"<<shape<<endl<<" area os shape is"<<area;
}