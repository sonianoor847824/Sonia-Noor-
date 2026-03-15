#include <iostream>
using namespace std;
main()
{
    cout<<" enter the password";
    string my_password;
    cin>>my_password;
    my_password = " pass@123";
    string user_enter;
    cin>>user_enter; 
    if( user_enter == my_password ){
    cout<<" wow ! you have cracked the codel!";
    }
    else{
        cout<<" it is not that simple, try again";
    }
}