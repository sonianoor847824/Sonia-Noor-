#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
     Animal arrays (max 200) 
    int totalAnimals = 0;
    string animalID[200], animalName[200], species[200], habitat[200];
    string diet[200], healthStatus[200], conservationStatus[200];
    int isAlive[200];

     Ticket arrays (max 500) 
    int totalTickets = 0;
    string ticketID[500], ticketName[500], ticketContact[500], ticketType[500], ticketDate[500];
    int ticketPrice[500];

     History arrays (max 300) 
    int totalHistory = 0;
    string historyLog[300], historyDate[300];

    while (true)
    {
        system("cls");
        cout << "-------- Welcome to ZOO Management System! --------" << endl;
        cout << " 1  Login as Admin (Zoo Manager)                  " << endl;
        cout << " 2  Login as Visitor (Guest)                      " << endl;
        cout << " 3  Exit                                          " << endl;
        cout << " Choose an Option: ";
        string userChoice;
        cin >> userChoice;

        if (userChoice == "1")
        {
            int adminAttempts;
            system("cls");
            cout << "---- Admin (Zoo Manager) Login ----" << endl;
            cout << " Press any key to Login            " << endl;
            getch();
            for (adminAttempts = 0; adminAttempts < 3; adminAttempts++)
            {
                system("cls");
                cout << "Attempt " << adminAttempts + 1 << endl;
                cout << "Username "; 
                string adminUsername;
                cin >> adminUsername;
                cout << "Password: ";
                string adminPassword;
                cin >> adminPassword;

                if (adminUsername == "admin" && adminPassword == "1234")
                {
                    system("cls");
                    cout << "| Admin login successful! |" << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "|---- ADMIN PANEL ----|"          << endl;
                        cout << "1   Add New Animal"             << endl;
                        cout << "2   Remove an Animal"           << endl;
                        cout << "3   Update Health Status"       << endl;
                        cout << "4   Update Diet Info"           << endl;
                        cout << "5   View All Animals"           << endl;
                        cout << "6   Search by Species"          << endl;
                        cout << "7   Sort Animals by Name"       << endl;
                        cout << "8   View Animals by Habitat"    << endl;
                        cout << "9   View History Log"           << endl;
                        cout << "10  Exit Admin Panel"           << endl;
                        cout << "Select ";
                        string adminChoice; 
                        cin >> adminChoice;

                         ADMIN 1 : Add New Animal 
                        if (adminChoice == "1")
                        {
                            system("cls");
                            cout << "--- ADD NEW ANIMAL ---" << endl;
                            if (totalAnimals >= 200)
                            {
                                cout << "[ERROR] Max 200 animals reached" << endl;
                            }
                            else
                            {
                                cout << "Animal ID           "; 
                                cin >> animalID[totalAnimals];
                                cout << "Animal Name         ";
                                cin >> animalName[totalAnimals];
                                cout << "Species             ";
                                cin >> species[totalAnimals];
                                cout << "Habitat             ";
                                cin >> habitat[totalAnimals];
                                cout << "Diet                ";
                                cin >> diet[totalAnimals];
                                cout << "Health Status       ";
                                cin >> healthStatus[totalAnimals];
                                cout << "Conservation Status ";
                                cin >> conservationStatus[totalAnimals];
                                isAlive[totalAnimals] = 1;
                                historyLog[totalHistory]  = "ADD: " + animalName[totalAnimals] + " (ID:" + animalID[totalAnimals] + ")";
                                historyDate[totalHistory] = "Session";
                                totalHistory++;
                                totalAnimals++;
                                cout << "Animal added successfully!" << endl;
                            }
                            cout << "Press any key";
                             getch();
                        }

                         ADMIN 2 : Remove Animal 
                        else if (adminChoice == "2")
                        {
                            system("cls");
                            cout << "--- REMOVE ANIMAL ---" << endl;
                            cout << "Enter Animal ID ";
                            string removeID; 
                            cin >> removeID;

                            int found = -1;
                            for (int i = 0; i < totalAnimals; i++)
                                if (animalID[i] == removeID) found = i;

                            if (found == -1)
                            {
                                cout << "[ERROR] Animal not found" << endl;
                            }
                            else
                            {
                                cout << "Name: " << animalName[found] << " | Species " << species[found] << endl;
                                cout << "Confirm remove?  ";
                                string confirm; 
                                cin >> confirm;
                                if (confirm == "y" || confirm == "Y")
                                {
                                    historyLog[totalHistory]  = "REMOVE: " + animalName[found] + " (ID:" + removeID + ")";
                                    historyDate[totalHistory] = "Session";
                                    totalHistory++;
                                     Shift ALL 8 arrays left to fill the gap
                                    for (int i = found; i < totalAnimals - 1; i++)
                                    {
                                        animalID[i]           = animalID[i+1];
                                        animalName[i]         = animalName[i+1];
                                        species[i]            = species[i+1];
                                        habitat[i]            = habitat[i+1];
                                        diet[i]               = diet[i+1];
                                        healthStatus[i]       = healthStatus[i+1];
                                        conservationStatus[i] = conservationStatus[i+1];
                                        isAlive[i]            = isAlive[i+1];
                                    }
                                    totalAnimals;
                                    cout << "Animal removed" << endl;
                                }
                                else cout << "Cancelled." << endl;
                            }
                            cout << "Press any key"; 
                            getch();
                        }

                        ADMIN 3 : Update Health Status 
                        else if (adminChoice == "3")
                        {
                            system("cls");
                            cout << "--- UPDATE HEALTH STATUS ---" << endl;
                            cout << "Enter Animal ID ";
                            string updID;
                            cin >> updID;

                            int found = -1;
                            for (int i = 0; i < totalAnimals; i++)
                                if (animalID[i] == updID) found = i;

                            if (found == -1)
                            {
                                cout << "[ERROR] Animal not found" << endl;
                            }
                            else
                            {
                                cout << "Current Health " << healthStatus[found] << endl;
                                cout << "New Status (healthy/sick/critical/recovering) ";
                                string newStatus;
                                cin >> newStatus;
                                string oldStatus    = healthStatus[found];
                                healthStatus[found] = newStatus;
                                historyLog[totalHistory]  = "UPDATE HEALTH: " + animalName[found] + " | " + oldStatus + " -> " + newStatus;
                                historyDate[totalHistory] = "Session";
                                totalHistory++;
                                cout << "Health updated." << endl;
                            }
                            cout << "Press any key";
                            getch();
                        }

                         ADMIN 4 : Update Diet;
                        else if (adminChoice == "4")
                        {
                            system("cls");
                            cout << "--- UPDATE DIET INFO ---" << endl;
                            cout << "Enter Animal ID "; 
                            string updID; 
                            cin >> updID;

                            int found = -1;
                            for (int i = 0; i < totalAnimals; i++)
                                if (animalID[i] == updID) found = i;

                            if (found == -1)
                            {
                                cout << "[ERROR] Animal not found" << endl;
                            }
                            else
                            {
                                cout << "Current Diet " << diet[found] << endl;
                                cout << "New Diet "; 
                                string newDiet;
                                cin >> newDiet;
                                string oldDiet = diet[found];
                                diet[found]    = newDiet;
                                historyLog[totalHistory]  = "UPDATE DIET: " + animalName[found] + " | " + oldDiet + " -> " + newDiet;
                                historyDate[totalHistory] = "Session";
                                totalHistory++;
                                cout << "Diet updated" << endl;
                            }
                            cout << "Press any key";
                            getch();
                        }

                         ADMIN 5 : View All Animals 
                        else if (adminChoice == "5")
                        {
                            system("cls");
                            cout << "--- ALL ANIMALS ---" << endl;
                            if (totalAnimals == 0)
                            {
                                cout << "No animals registered" << endl;
                            }
                            else
                            {
                                int healthy = 0, sick = 0;
                                for (int i = 0; i < totalAnimals; i++)
                                {
                                    cout << animalID[i] << " | " << animalName[i] << " | " << species[i]
                                         << " | " << habitat[i] << " | " << diet[i]
                                         << " | " << healthStatus[i] << " | " << conservationStatus[i] << endl;
                                    if (healthStatus[i] == "healthy") healthy++;
                                    else sick++;
                                }
                                cout << "Total " << totalAnimals << " | Healthy: " << healthy << " | Sick: " << sick << endl;
                            }
                            cout << "Press any key"; 
                             getch();
                        }

                         ADMIN 6 : Search by Species 
                        else if (adminChoice == "6")
                        {
                            system("cls");
                            cout << "--- SEARCH BY SPECIES ---" << endl;
                            cout << "Enter species ";
                             string s; 
                             cin >> s;
                            int count = 0;
                            for (int i = 0; i < totalAnimals; i++)
                            {
                                if (species[i] == s)
                                {
                                    cout << animalName[i] << " | " << habitat[i] << " | " << healthStatus[i] << " | " << conservationStatus[i] << endl;
                                    count++;
                                }
                            }
                            if (count == 0) cout << "No animals found." << endl;
                            else cout << "Found " << count << endl;
                            cout << "Press any key";
                             getch();
                        }

                        ADMIN 7 : Sort by Name (asc / desc) 
                        else if (adminChoice == "7")
                        {
                            system("cls");
                            cout << "--- SORT BY NAME ---" << endl;
                            cout << "1  A-Z  |  2  Z-A  ";
                            string sortOrder;
                            cin >> sortOrder;

                             Find the right position, swap all 8 arrays using temp variables
                            for (int i = 0; i < totalAnimals - 1; i++)
                            {
                                int targetPos = i;
                                for (int j = i + 1; j < totalAnimals; j++)
                                {
                                    if (sortOrder == "1" && animalName[j] < animalName[targetPos]) targetPos = j;
                                    else if (sortOrder == "2" && animalName[j] > animalName[targetPos]) targetPos = j;
                                }
                                if (targetPos != i)
                                {
                                    string t; int ti;
                                    t = animalName[i];          animalName[i]          = animalName[targetPos];          animalName[targetPos]          = t;
                                    t = animalID[i];            animalID[i]            = animalID[targetPos];            animalID[targetPos]            = t;
                                    t = species[i];             species[i]             = species[targetPos];             species[targetPos]             = t;
                                    t = habitat[i];             habitat[i]             = habitat[targetPos];             habitat[targetPos]             = t;
                                    t = diet[i];                diet[i]                = diet[targetPos];                diet[targetPos]                = t;
                                    t = healthStatus[i];        healthStatus[i]        = healthStatus[targetPos];        healthStatus[targetPos]        = t;
                                    t = conservationStatus[i];  conservationStatus[i]  = conservationStatus[targetPos];  conservationStatus[targetPos]  = t;
                                    ti = isAlive[i];            isAlive[i]             = isAlive[targetPos];             isAlive[targetPos]             = ti;
                                }
                            }
                            cout << "Sorted! Results" << endl;
                            for (int i = 0; i < totalAnimals; i++)
                                cout << animalName[i] << " | " << species[i] << " | " << habitat[i] << endl;
                            cout << "Press any key";
                            getch();
                        }

                         ADMIN 8 : View by Habitat 
                        else if (adminChoice == "8")
                        {
                            system("cls");
                            cout << "--- VIEW BY HABITAT ---" << endl;
                            cout << "Enter habitat name ";
                            string h; 
                            cin >> h;
                            int count = 0;
                            for (int i = 0; i < totalAnimals; i++)
                            {
                                if (habitat[i] == h)
                                {
                                    cout << animalName[i] << " | " << species[i] << " | " << healthStatus[i] << " | " << conservationStatus[i] << endl;
                                    count++;
                                }
                            }
                            if (count == 0) cout << "No animals in this habitat" << endl;
                            else cout << "Total " << count << endl;
                            cout << "Press any key"; getch();
                        }

                         ADMIN 9 : View History Log 
                        else if (adminChoice == "9")
                        {
                            system("cls");
                            cout << "--- HISTORY LOG ---" << endl;
                            if (totalHistory == 0) cout << "No events yet" << endl;
                            else
                            {
                                for (int i = 0; i < totalHistory; i++)
                                    cout << historyDate[i] << " | " << historyLog[i] << endl;
                                cout << "Total events " << totalHistory << endl;
                            }
                            cout << "Press any key"; 
                            getch();
                        }

                        else if (adminChoice == "10")
                        {
                            cout << "Logging out from Admin " << endl;
                            cout << "Press Enter to confirm logout" << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "Invalid option. Choose 1-10" << endl;
                            cout << "Press any key"; 
                            getch();
                        }
                    }
                    cout << "Press any key to return to the main menu" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid credentials " << endl;
                    if (adminAttempts < 2)
                    { cout << "Try again" << endl; 
                    cout << "Press any key"; 
                    getch();
                    }
                    else { cout << "Account Locked" << endl; 
                          cout << "Press any key";
                          getch();
                         }
                }
            }
        }

        else if (userChoice == "2")
        {
            int visitorAttempts;
            system("cls");
            cout << "---- Visitor (Guest) Login ----" << endl;
            cout << " Press any key to Login        " << endl;
            getch();
            for (visitorAttempts = 0; visitorAttempts < 3; visitorAttempts++)
            {
                system("cls");
                cout << "Attempt " << visitorAttempts + 1 << endl;
                cout << "Username ";
                string visitorUsername;
                cin >> visitorUsername;
                cout << "Password: ";
                string visitorPassword;
                cin >> visitorPassword;

                if (visitorUsername == "visitor" && visitorPassword == "1234")
                {
                    system("cls");
                    cout << " Visitor login successful! " << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "---- VISITOR PANEL ----"          << endl;
                        cout << "1   View All Animals"             << endl;
                        cout << "2   Search by Name"               << endl;
                        cout << "3   Search by Species"            << endl;
                        cout << "4   View by Habitat"              << endl;
                        cout << "5   Sort Animals by Name"         << endl;
                        cout << "6   View Endangered Animals"      << endl;
                        cout << "7   Buy a Ticket"                 << endl;
                        cout << "8   View My Tickets"              << endl;
                        cout << "9   Zoo Info & Animal Count"      << endl;
                        cout << "10  Exit Visitor Panel"           << endl;
                        cout << "Select ";
                        string visitorChoice;
                        cin >> visitorChoice;

                         VISITOR 1 : View All Animals (public only) 
                        if (visitorChoice == "1")
                        {
                            system("cls");
                            cout << "--- ALL ANIMALS ---" << endl;
                            if (totalAnimals == 0) cout << "No animals to display." << endl;
                            else
                                for (int i = 0; i < totalAnimals; i++)
                                    cout << animalName[i] << " | " << species[i] << " | " << habitat[i] << " | " << conservationStatus[i] << endl;
                            cout << "Press any key";
                            getch();
                        }

                         VISITOR 2 : Search by Name 
                        else if (visitorChoice == "2")
                        {
                            system("cls");
                            cout << "--- SEARCH BY NAME ---" << endl;
                            cout << "Enter name ";
                             string searchName;
                             cin >> searchName;
                            int count = 0;
                            for (int i = 0; i < totalAnimals; i++)
                            {
                                if (animalName[i].find(searchName) != string::npos)
                                {
                                    cout << animalName[i] << " | " << species[i] << " | " << habitat[i] << " | " << conservationStatus[i] << endl;
                                    count++;
                                }
                            }
                            if (count == 0) 
                            cout << "No animals found" << endl;
                            cout << "Press any key"; 
                             getch();
                        }

                        VISITOR 3 : Search by Species 
                        else if (visitorChoice == "3")
                        {
                            system("cls");
                            cout << "--- SEARCH BY SPECIES ---" << endl;
                            cout << "Enter species: "; 
                            string s;
                            cin >> s;
                            int count = 0;
                            for (int i = 0; i < totalAnimals; i++)
                            {
                                if (species[i] == s)
                                {
                                    cout << animalName[i] << " | " << habitat[i] << " | " << conservationStatus[i] << endl;
                                    count++;
                                }
                            }
                            if (count == 0)
                            cout << "No animals found" << endl;
                            else cout << "Found " << count << endl;
                            cout << "Press any key";
                            getch();
                        }

                         VISITOR 4 : View by Habitat 
                        else if (visitorChoice == "4")
                        {
                            system("cls");
                            cout << "--- VIEW BY HABITAT ---" << endl;
                            cout << "Enter habitat ";
                             string h; 
                             cin >> h;
                            int count = 0;
                            for (int i = 0; i < totalAnimals; i++)
                            {
                                if (habitat[i] == h)
                                {
                                    cout << animalName[i] << " | " << species[i] << " | " << conservationStatus[i] << endl;
                                    count++;
                                }
                            }
                            if (count == 0)
                                cout << "No animals found." << endl;
                            else cout << "Total: " << count << endl;
                            cout << "Press any key";
                             getch();
                        }

                        VISITOR 5 : Sort A-Z (temp copy, main unchanged)
                        else if (visitorChoice == "5")
                        {
                            system("cls");
                            cout << "--- ANIMALS A-Z ---" << endl;
                             Copy into temp arrays — main arrays never touched
                            string tName[200], tSpecies[200], tHabitat[200], tStatus[200];
                            int tCount = totalAnimals;
                            for (int i = 0; i < tCount; i++)
                            {
                                tName[i] = animalName[i]; tSpecies[i] = species[i];
                                tHabitat[i] = habitat[i]; tStatus[i]  = conservationStatus[i];
                            }
                             Find min name position, swap using temp variable
                            for (int i = 0; i < tCount - 1; i++)
                            {
                                int minPos = i;
                                for (int j = i + 1; j < tCount; j++)
                                    if (tName[j] < tName[minPos]) minPos = j;
                                if (minPos != i)
                                {
                                    string t;
                                    t = tName[i];    tName[i]    = tName[minPos];    tName[minPos]    = t;
                                    t = tSpecies[i]; tSpecies[i] = tSpecies[minPos]; tSpecies[minPos] = t;
                                    t = tHabitat[i]; tHabitat[i] = tHabitat[minPos]; tHabitat[minPos] = t;
                                    t = tStatus[i];  tStatus[i]  = tStatus[minPos];  tStatus[minPos]  = t;
                                }
                            }
                            if (tCount == 0) cout << "No animals" << endl;
                            else
                                for (int i = 0; i < tCount; i++)
                                    cout << tName[i] << " | " << tSpecies[i] << " | " << tHabitat[i] << endl;
                            cout << "Press any key";
                            getch();
                        }

                         VISITOR 6 : View Endangered Animals
                        else if (visitorChoice == "6")
                        {
                            system("cls");
                            cout << "--- ENDANGERED ANIMALS ---" << endl;
                            int count = 0;
                            for (int i = 0; i < totalAnimals; i++)
                            {
                                if (conservationStatus[i] == "endangered" || conservationStatus[i] == "critically endangered")
                                {
                                    cout << animalName[i] << " | " << species[i] << " | " << habitat[i] << " | " << conservationStatus[i] << endl;
                                    count++;
                                }
                            }
                            if (count == 0) 
                            cout << "No endangered animals found" << endl;
                            else cout << "Total Endangered " << count << endl;
                            cout << "Press any key"; 
                            getch();
                        }

                         VISITOR 7 : Buy a Ticket 
                        else if (visitorChoice == "7")
                        {
                            system("cls");
                            cout << "--- BUY A TICKET ---" << endl;
                            cout << "adult=500 | child=250 | student=300 | family=1200" << endl;
                            if (totalTickets >= 500)
                            {
                                cout << "[ERROR] Max tickets reached" << endl;
                            }
                            else
                            {
                                cout << "Name         ";
                                cin >> ticketName[totalTickets];
                                cout << "Contact      "; 
                                cin >> ticketContact[totalTickets];
                                cout << "Ticket Type  "; 
                                cin >> ticketType[totalTickets];

                                if      (ticketType[totalTickets] == "adult")   ticketPrice[totalTickets] = 500;
                                else if (ticketType[totalTickets] == "child")   ticketPrice[totalTickets] = 250;
                                else if (ticketType[totalTickets] == "student") ticketPrice[totalTickets] = 300;
                                else if (ticketType[totalTickets] == "family")  ticketPrice[totalTickets] = 1200;
                                else                                             ticketPrice[totalTickets] = 0;

                                ticketID[totalTickets]   = "T00" + to_string(totalTickets + 1);
                                ticketDate[totalTickets] = "Session";
                                cout << "Ticket ID: " << ticketID[totalTickets] << " | " << ticketType[totalTickets] << " | Rs." << ticketPrice[totalTickets] << endl;

                                historyLog[totalHistory]  = "TICKET: " + ticketName[totalTickets] + " bought " + ticketType[totalTickets];
                                historyDate[totalHistory] = "Session";
                                totalHistory++;
                                totalTickets++;
                            }
                            cout << "Press any key";
                             getch();
                        }

                         VISITOR 8 : View My Tickets 
                        else if (visitorChoice == "8")
                        {
                            system("cls");
                            cout << "--- MY TICKETS ---" << endl;
                            cout << "Enter contact number: ";
                             string myContact;
                             cin >> myContact;
                            int count = 0;
                            for (int i = 0; i < totalTickets; i++)
                            {
                                if (ticketContact[i] == myContact)
                                {
                                    cout << ticketID[i] << " | " << ticketType[i] << " | Rs." << ticketPrice[i] << " | " << ticketDate[i] << endl;
                                    count++;
                                }
                            }
                            if (count == 0) cout << "No tickets found" << endl;
                            else cout << "Total " << count << endl;
                            cout << "Press any key"; 
                            getch();
                        }

                         VISITOR 9 : Zoo Info & Animal Count
                        else if (visitorChoice == "9")
                        {
                            system("cls");
                            cout << "--- ZOO INFO ---"                      << endl;
                            cout << "Total Animals  " << totalAnimals      << endl;
                            cout << "Tickets Sold   " << totalTickets      << endl;

                             Count endangered
                            int endCount = 0;
                            for (int i = 0; i < totalAnimals; i++)
                                if (conservationStatus[i] == "endangered" || conservationStatus[i] == "critically endangered") endCount++;
                            cout << "Endangered     " << endCount << endl;

                             Count per habitat
                            string uHabitat[200]; int uCount[200]; int uTotal = 0;
                            for (int i = 0; i < totalAnimals; i++)
                            {
                                int hFound = -1;
                                for (int h = 0; h < uTotal; h++)
                                    if (uHabitat[h] == habitat[i]) hFound = h;
                                if (hFound == -1) { uHabitat[uTotal] = habitat[i]; uCount[uTotal] = 1; uTotal++; }
                                else uCount[hFound]++;
                            }
                            cout << "Animals per Habitat" << endl;
                            for (int h = 0; h < uTotal; h++)
                                cout << "  " << uHabitat[h] << " : " << uCount[h] << endl;
                            cout << "Press any key"; 
                            getch();
                        }

                        else if (visitorChoice == "10")
                        {
                            cout << "Logging out from visitor Panel" << endl;
                            cout << "Press Enter to confirm logout" << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "Invalid option. Choose 1-10." << endl;
                            cout << "Press any key";
                            getch();
                        }
                    }
                    cout << "Press any key to return to the main menu" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid credentials " << endl;
                    if (visitorAttempts < 2) { cout << "Try again" << endl; 
                    cout << "Press any key";
                    getch();
                    }
                    else { cout << "Account Locked" << endl; 
                    cout << "Press any key";
                    getch();
                   }
                }
            }
        }

        else if (userChoice == "3")
        {
            cout << "Exiting The ZOO Management System. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid option. Try again" << endl;
            getch();
        }
    }
    cout << " Thank you for using the ZOO Management System. Have a great day! " << endl;
}
