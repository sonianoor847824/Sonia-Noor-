#include<iostream>
using namespace std; 
main()
{
      cout<<"enter wins";
      int wins;
      cin>>wins;
      cout<<"enter draws"; 
      int draws;
      cin>>draws;
      cout<<"enter losses";
      int losses;
      cin>>losses;
      int points;
      points=(wins*3)+(draws*1)+(losses*0);
      cout<<"pakistan has obtained in asia cup"<<points;
      }