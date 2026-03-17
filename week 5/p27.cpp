#include <iostream>
using namespace std;

int main()
{      

    {
        int choice;
        cout << " Library System \n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Books\n";
        cout << "4. View Borrowed Books\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
         while ( choice >= 1 && choice <= 5)
        {
            if( choice == 1)
            {
                cout <<" you selected : add books";
            }
        else if( choice == 2)
            {
                cout <<" you selected : view books";
            }
            else if( choice == 3)
            {
                cout <<" you selected : borrow books";
            }
         else if( choice ==4)
            {
                cout <<" you selected : return books";
            }
             else if( choice == 5)
            {
                cout <<" exiting library system.thank you!";
                break;
            }
            else{
                cout <<" invalid choice!";
            }
                cout <<" \nenter your choice :";
                  cin >> choice;
        }
    } 

    

}