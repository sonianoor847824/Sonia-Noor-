#include<iostream>
using namespace std; 
main()
{
    cout<<"enter your age in years";
    int years;
    cin>>years;
    int years_in_days; 
    years_in_days=years*365-(years_in_days%4);
    cout<<"your age in days is approximately"<<years_in_days;
     }