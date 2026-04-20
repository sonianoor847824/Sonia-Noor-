#include<iostream>
using namespace std;
int  minimum(int num1,int num2);
int main()
{
    int num1,num2;
    cout <<" enter number ";
    cin >> num1;
    cout <<" enter number ";
    cin >> num2;
    int result = minimum( num1 , num2);
    cout <<" the minimum is "<< result <<endl;
    return 0;
}
int minimum( int num1 ,int num2)
{
    if ( num1 < num2)
    {
       return num1;
    }
    else{
      return num2;
    }
}