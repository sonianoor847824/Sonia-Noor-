#include <iostream>
using namespace std;
main()
{ 
    float redrose,whiterose,tulip,total,discount;
    cout<<" enter the amount of red rose ";
    float redrosep=2.00;
    cin>>redrose;
    cout<<" enter the amount of white ross ";
    float whiterosep=4.10;
    cin>>whiterose;
    cout<<" enter the amount of tulip ";
    float tulipp=2.50;
    cin>>tulip;
    total=( redrose*redrosep)+( whiterose*whiterosep)+( tulip*tulipp);
    if( total > 200)
    {
        discount=total-total*0.2; 
        cout<<" original price=" <<total<<endl<<"discount price = "<<discount;
    }
    else
    {
        cout<<" original price="<<total;
    }
}