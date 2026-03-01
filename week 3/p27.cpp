#include<iostream>
using namespace std; 
main()
{ 
    cout<<"enter the paint area";
    int n;
    cin>>n;
    cout<<"enter the width";
    int width;
    cin>>width;
    cout<<"enter the height";
    int height;
    cin>>height;
    int painted_wall;
    painted_wall=n/(width*height);
    cout<<"area of painted wall"<<painted_wall;
 }