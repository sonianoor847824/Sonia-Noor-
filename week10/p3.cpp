#include<iostream>
using namespace std;

float squareroot( int num)
{
    float i=0;
    while( i*i <=num)
    {
       i += 0;
    }
     return i;

}
int main()
{
int num;
float result;
 cout <<" enter the number ";
    cin >> num;
    result = squareroot(num);
    cout <<" squareroot "<<result <<endl;
}    