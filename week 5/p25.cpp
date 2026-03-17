#include <iostream>
using namespace std;

int main()
{
    int choice;

    {
        cout << " Restaurant Management System \n";
        cout << "1. View Food Menu\n";
        cout << "2. Place Order\n";
        cout << "3. View Order Status\n";
        cout << "4. Generate Bill\n";
        cout << "5. Contact Staff\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        while( choice >=1 && choice <= 6)
        {
            if ( choice == 1)
            {
                cout << "You selected: View Food Menu." ;
            }
         else if(choice == 2)
            {
                cout << "You selected: Place Order." ;
            }
         else if( choice == 3) 
            {
                cout << "You selected: View Order Status." ;
            }
         else if( choice == 4)
            {
                cout << "You selected: Generate Bill." ;
            }
         else if( choice == 5)
            {
                cout << "You selected: Contact Staff." ;
            }
         else if( choice == 6)
            {
                cout << "Exiting Restaurant Management System. Thank you!";
                break;
            }
                else
            {
                cout << "Invalid choice! " ;
            }
            cout<<" \nenter your choice:";
            cin>>choice;

        }
    }
}    
