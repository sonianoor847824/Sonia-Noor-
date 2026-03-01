#include<iostream>
using namespace std; 
main()
{ 
     cout<<"enter the number of minutes";
     int min;
     cin>>min;
     cout<<"enter the frames per second";
     int sec;
     cin>>sec;
     int totalfps;
     totalfps=min*sec;
     cout<<"the totalfps are"<<totalfps;
 }