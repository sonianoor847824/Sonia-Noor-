#include<iostream>
using namespace std; 
main()
{ 
   cout<<" enter the weight of fertilizer bag";
   int weight;
   cin>>weight;
   cout<<"enter the cost of bag";
   int cost;
   cin>>cost;
   cout<<"enter the size of the area by bag(in squre feet)";
   int area;
   cin>>area;
   int price_per_pound;
   price_per_pound=cost/weight;
   int price_per_square_feet;
   price_per_square_feet=cost/area;
   cout<<"the price_per_pound are"<<price_per_pound<<"the price_per_square_feet are"<<price_per_square_feet;
}