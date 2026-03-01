#include<iostream>
using namespace std; 
main()
{ 
   cout<<"enter the imposter"; 
   float imposter;
   cin>>imposter;
   cout<<"enter the player";
   float player;
   cin>>player;
   int chance_of_being_imposter;
   chance_of_being_imposter=100*(imposter/player);
   cout<<"the chance_of_being_imposter are"<<chance_of_being_imposter<<"%";
}