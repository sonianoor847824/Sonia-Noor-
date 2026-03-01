#include<iostream>
using namespace std; 
main()
{ 
    cout<<"enter the name of movie";
    string movie;
    cin>>movie;
    cout<<"enter price of adult ticket";
    int adult_ticket;
    cin>>adult_ticket;
    cout<<"enter price of children ticket";
    int children_ticket;
    cin>>children_ticket;
    cout<<"enter the adult ticket sold";
    int adult_ticket_sold;
    cin>> adult_ticket_sold;
    cout<<"enter the children ticket sold";
    int children_ticket_sold;
    cin>>children_ticket_sold;
    cout<<"enter percentage money donated to charity";
    float  donation_percentage;
    cin>>donation_percentage;
    int total_earned;
    total_earned=(adult_ticket*adult_ticket_sold)+(children_ticket*children_ticket_sold);
    int donation_amount;
    donation_amount=(donation_percentage/100)*total_earned;
    int remaining_amount;
    remaining_amount=total_earned-donation_amount;
   cout<<"the donation_amount are"<<donation_amount<<"the remaining_amount are"<<remaining_amount;
}