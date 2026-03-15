#include <iostream>
using namespace std;
main()
{
     cout<<" enter number";
     int number,ones,tens;
     cin>>number;
    if( number == 1){ cout<<" one" ;}
    else if( number == 2){ cout<< " two";}  
    else if( number == 3){ cout<< " three";}
    else if( number == 4){ cout<< " four";}
    else if( number == 5){ cout<< " five";}
    else if( number == 6){ cout<< " six";}
    else if( number == 7){ cout<< " seven";}
    else if( number == 8){ cout<< " eight";}
    else if( number == 9){ cout<< " nine";}
    else if( number == 10){ cout<< " ten";}
    else if( number == 11){ cout<< " eleven";}
    else if( number == 12){ cout<< " twelve";}
    else if( number == 13){ cout<< " thirteen";}
    else if( number == 14){ cout<< " fourteen";}
    else if( number == 15){ cout<< " fifteen";}
    else if( number == 16){ cout<< " sixteen";}
    else if( number == 17){ cout<< " seventeen";}
    else if( number == 18){ cout<< " eighteen";}
    else if( number == 19){ cout<< " nineteen";}
    else if( number == 20){ cout<< " twenty ";}
    else if( number == 30){ cout<< " thirty";}
    else if( number == 40){ cout<< " fourty";}
    else if( number == 50){ cout<< " fifty";}
    else if( number == 60){ cout<< " sisty";}
    else if( number == 70){ cout<< " seventy";}
    else if( number == 80){ cout<< " eighty";}
    else if( number == 90){ cout<< " ninety";}
    else if( number == 100){ cout<< "one hundrad";}
    else if( number > 20 && number < 100 )
    {
        tens = number / 10;
        ones = number % 10;
        if( tens == 2){ cout<<" twenty";}
        else if( tens == 3){ cout<<" thirty";}
        else if( tens == 4){ cout<<" fourty";}
        else if( tens == 5){ cout<<" fifty";}
        else if( tens == 6){ cout<<" sixty";}
        else if( tens == 7){ cout<<" seventy";}
        else if( tens == 8){ cout<<" eighty";}
        else if( tens == 9){ cout<<" ninety";}

        if( ones == 1){ cout<<" ones";}
        else if( ones == 2){ cout<<" two";}
        else if( ones == 3){ cout<<" three";}
        else if( ones == 4){ cout<<" four";}
        else if( ones == 5){ cout<<" five";}
        else if( ones == 6){ cout<<" six";}
        else if( ones == 7){ cout<<" seven";}
        else if( ones == 8){ cout<<" eight";}
        else if( ones == 9){ cout<<" nine";}
    }
    else
    {
        cout<<" number is out of range";
    }
}