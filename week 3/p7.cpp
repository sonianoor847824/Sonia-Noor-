#include<iostream>
using namespace std; 
main()
{ 
   cout<<"enter the hours";
   int h;   
   cin>>h;
   int m;
   m=60*h;
   int s;
   s=60*m;
   cout<<"there are"<< s <<"many s in"<<h;
}