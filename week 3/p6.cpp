#include<iostream>
using namespace std; 
main()
{ 
     cout<<"enter the megabytes";
     float mb;
     cin>>mb;
     float kb;
     kb= 1024*mb;
     float byte;
     byte=1024*kb;
     float bit;
     bit=8*byte;
     cout<<"there are"<<bit<<"         many bit in"<<mb;}