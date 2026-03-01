#include<iostream>
using namespace std; 
main()
{ 
     cout<<"enter the initial velocity";
     int initial_velocity;
     cin>>initial_velocity;
     cout<<"enter the acceleration";
     int acceleration;
     cin>>acceleration;
     cout<<"enter the time";
     int time;
     cin>>time;
     int final_velocity;
     final_velocity=(acceleration*time)+initial_velocity;
     cout<<"the final_velocity are"<<final_velocity;
   }