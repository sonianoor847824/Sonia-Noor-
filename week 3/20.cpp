#include<iostream>
using namespace std; 
main()
{ 
   cout<<"enter the name";
   string name;
   cin>>name;
  cout<<"weight loss in kilograms";
  int weight_loss;
  cin>>weight_loss;
  int days_required;
  days_required=weight_loss*15;
  cout<<"the days_required are"<<days_required;
}