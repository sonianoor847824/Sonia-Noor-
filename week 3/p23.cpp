#include<iostream>
using namespace std; 
main()
{ 
   cout<<"enter the vegetable price per kilogram";
   float veg_price;
   cin>>veg_price;
   cout<<"enter the fruit price per kilogram";
   float fruit_price;
   cin>>fruit_price;
   cout<<"total kilogram of vegetable";
   int veg_kilo;
   cin>>veg_kilo;
   cout<<"total kilogram of fruit";
   int fruit_kilo;
   cin>>fruit_kilo;
   int total_coins;
   total_coins=(veg_price*veg_kilo)+(fruit_price*fruit_kilo);
   int total_rps;
   total_rps=total_coins/1.94;
   cout<<"the total_coins are"<<total_coins<<"the total_rps are"<<total_rps;
}