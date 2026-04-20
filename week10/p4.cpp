#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double distance,degrees,radian,height;
    cout <<" distance from the base of tree";
    cin >> distance;
    cout <<" angle of elevation ";
    cin >> degrees;
    radian = degrees / 57.8;
    height = distance * tan(radian);
    cout <<" the height of tree "<< height<<" feet "<<endl;
    return 0;
}