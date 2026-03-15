#include <iostream>
using namespace std;
main()
{ 
    cout<<" enter the number of holidays ";
    int holidays,workingdays,totalplay,difference,hours,minutes;
    cin>>holidays;
    workingdays=365-holidays;
    totalplay=( workingdays*63)+( holidays*127);
    difference=30000-totalplay;
    hours=difference/60;
    minutes=difference%60;
    if( totalplay< 30000)
    {
      cout<<" tom sleeps well\n";
      cout<<" hours "<< minutes <<"minutes less to play";
    }
    else
    {
        cout<<" tom will run away\n";
        cout<<hours<<" hours "<<minutes<<" minutes to play";
    }
    
}