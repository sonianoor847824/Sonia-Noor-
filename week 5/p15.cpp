#include<iostream>
using namespace std;
main()
{
      int value;
      cout<<" please enter a positive number ";
      cin >> value;
      while( value <= 0)
      {
        cout << " error " << value << "is note a positive number "<< endl;
        cout << " please enter a positive ";
        cin >> value;
      }
      cout << " program ends " << endl;
     }