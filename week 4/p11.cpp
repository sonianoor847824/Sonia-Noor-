#include <iostream>
using namespace std;
main()
{
    cout<<" enter your bill";
    float bill_amount;
    cin>>bill_amount;
    float discount_rate; 
    if( bill_amount <= 5000){
    discount_rate = 0.05;
    }
     else{
     discount_rate = 0.10;
     }
     float discount_bill = bill_amount - ( bill_amount * discount_rate);
     cout<<" your discount bill "<<discount_bill;
    }
