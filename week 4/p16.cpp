#include <iostream>
using namespace std;
main()
{ 
    cout<<" enter couyntry";
    string country;
    cin>>country;
    cout<<" enter ticket price in dollars";
    int ticketprice,bonus,afterbonus; 
    cin>>ticketprice;
    if( country == "pakistan")
    {
        bonus=ticketprice*0.05;
    }
    if( country == "india")
    {
        bonus=ticketprice*0.05;
    }
    if( country == "germany")
    {
        bonus=ticketprice*0.05;
    }
    if( country == "ireland")
    {
        bonus=ticketprice*0.05;
    }
    afterbonus=ticketprice-bonus;
    cout<<"country name is"<<country<<endl<<" the ticket price is "<<ticketprice;

}