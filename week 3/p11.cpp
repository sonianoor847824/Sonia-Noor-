#include<iostream>
using namespace std; 
main()
{
    cout<<"enter the world population";
    int pop;
    cin>>pop;
    cout<<"enter the birth rate(number of birth per month)";
    int birth;
    cin>>birth;
    int pop_afterthree;
    pop_afterthree=pop+(birth*360);
    cout<<"population in decads"<<pop_afterthree;
}