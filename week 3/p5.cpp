#include<iostream>
using namespace std; 
main()
{ 
    cout<<"enter the name";
    string name;
    cin>>name;
    cout<<"enter the matric number(out of 1100)";
    float matric;
    cin>>matric;
    cout<<"enter the intermediate number(out of 550)";
    float inter;
    cin>>inter;
    cout<<"enter the ecat(out of 400)";
    float ecat;
    cin>>ecat;
    float matricpercentage;
    matricpercentage=(matric/1100)*100;
    float interpercentage;
    interpercentage=(inter/550)*100;
    float ecatpercentage;
    ecatpercentage=(ecat/400)*100;
    cout <<"enter the aggregate";
    float aggregate;
    aggregate=(matricpercentage*0.10)+
              (interpercentage*0.40)+
              (ecatpercentage*0.50);
    cout<<"the aggregate"<<aggregate<<"%";


}



