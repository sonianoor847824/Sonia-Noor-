#include <iostream>
#include <conio.h>
using namespace std;

void displayAdminMenu()
{
    cout << " -----------------------------------" << endl;
    cout << " ------ ZOO ADMIN PANEL -----------" << endl;
    cout << " -----------------------------------" << endl;
    cout << " 1. Show All Animals " << endl;
    cout << " 2. Add New Animal " << endl;
    cout << " 3. Search Animal " << endl;
    cout << " 4. Update Animal Information " << endl;
    cout << " 5. Show Animal Health Report " << endl;
    cout << " 6. Delete Animal Record " << endl;
    cout << " 7. Logout " << endl;
    cout << endl;
}
void displayAnimalsAdmin(string animalNameArray[], int animalAgeArray[], float animalWeightArray[], float animalHeightArray[],
                    float animalFoodPerDayArray[], string animalCategoryArray[], string animalHabitatArray[], int index)
{
    cout << endl;
    cout << " Total Registered Animals: " << index << endl;
    cout << endl;
    cout << " No |\t Name \t| Age | Weight | Height | Food Per Day | Category | Habitat " << endl;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] != "")
        {
            cout << i + 1 << " |\t " << animalNameArray[i] << "\t| " << animalAgeArray[i]
                 << "\t| " << animalWeightArray[i] << "\t| " << animalHeightArray[i]
                 << "\t| " << animalFoodPerDayArray[i] << "\t| " << animalCategoryArray[i]
                 << "\t| " << animalHabitatArray[i] << endl;
        }
    }
    cout << endl;
}
void addAnimal(string animalNameArray[], int animalAgeArray[], float animalWeightArray[], float animalHeightArray[],
               float animalFoodPerDayArray[], string animalCategoryArray[], string animalHabitatArray[], int index,
               int totalAnimals, float animalDailyExpenseArray[], string animalFoodTypeArray[], string animalHealthStatusArray[],
               string animalZoneArray[])
{
    if (index >= totalAnimals)
    {
        cout << " Zoo is Full! Cannot Add More Animals." << endl;
    }
    cout << " Zoo Animal Registration " << endl;
    string animalName, animalCategory, animalHabitat, animalFoodType, animalHealth, animalZone;
    int animalAge;
    float animalWeight, animalHeight, animalFood, animalExpense;

    cout << " Enter Animal Name: ";
    cin >> animalName;
    cout << " Enter Animal Age: ";
    cin >> animalAge;
    cout << " Enter Animal Weight: ";
    cin >> animalWeight;
    cout << " Enter Animal Height: ";
    cin >> animalHeight;
    cout << " Enter Food Per Day: ";
    cin >> animalFood;
    cout << " Enter Daily Expense: ";
    cin >> animalExpense;
    cout << " Enter Food Type: ";
    cin >> animalFoodType;

    // Category Validation
    while (true)
    {
        cout << " Enter Animal Category (Carnivore/Herbivore/Omnivore): ";
        cin >> animalCategory;
        if (animalCategory == "Carnivore" || animalCategory == "Herbivore" || animalCategory == "Omnivore")
            break;
        cout << " Invalid Category. Please Try Again." << endl;
    }
    // Habitat Validation
    while (true)
    {
        cout << " Enter Animal Habitat (Jungle/Forest/Grassland/Savannah/Water/Desert): ";
        cin >> animalHabitat;
        if (animalHabitat == "Jungle" || animalHabitat == "Forest" || animalHabitat == "Grassland" ||
            animalHabitat == "Savannah" || animalHabitat == "Water" || animalHabitat == "Desert")
            break;
        cout << " Invalid Habitat. Please Try Again." << endl;
    }
    // Health Validation — use getline to handle "Under Treatment"
    cin.ignore();
    while (true)
    {
        cout << " Enter Health Status (Healthy/Sick/Under Treatment): ";
        getline(cin, animalHealth);
        if (animalHealth == "Healthy" || animalHealth == "Sick" || animalHealth == "Under Treatment")
            break;
        cout << " Invalid Status. Try Again." << endl;
    }
    // Zone Validation — use getline to handle multi-word zones
    while (true)
    {
        cout << " Enter Zone (Lion Zone/Forest Zone/Grassland Zone/Savannah Zone/Jungle Zone/Water Zone/Other): ";
        getline(cin, animalZone);
        if (animalZone == "Lion Zone" || animalZone == "Forest Zone" || animalZone == "Grassland Zone" ||
            animalZone == "Savannah Zone" || animalZone == "Jungle Zone" || animalZone == "Water Zone" || animalZone == "Other")
            break;
        cout << " Invalid Zone. Try Again." << endl;
    }

    animalNameArray[index] = animalName;
    animalAgeArray[index] = animalAge;
    animalWeightArray[index] = animalWeight;
    animalHeightArray[index] = animalHeight;
    animalFoodPerDayArray[index] = animalFood;
    animalDailyExpenseArray[index] = animalExpense;
    animalFoodTypeArray[index] = animalFoodType;
    animalCategoryArray[index] = animalCategory;
    animalHabitatArray[index] = animalHabitat;
    animalHealthStatusArray[index] = animalHealth;
    animalZoneArray[index] = animalZone;
    index++;
    cout << endl;
    cout << " Animal Registered Successfully!" << endl;
}
void searchAnimalAdmin(string animalNameArray[], int animalAgeArray[], float animalWeightArray[], float animalHeightArray[],
                       float animalFoodPerDayArray[], string animalCategoryArray[], string animalHabitatArray[], int index)
{
    cout << " Enter Animal Name to Search: ";
    string searchAnimal;
    cin >> searchAnimal;
    bool found = false;
    int foundIndex = -1;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] == searchAnimal)
        {
            found = true;
            foundIndex = i;
            break;
        }
    }
    if (found)
    {
        cout << endl;
        cout << " No. |\t Name \t| Age | Weight | Height | Food Per Day | Category | Habitat " << endl;
        cout << foundIndex + 1 << " |\t "
             << animalNameArray[foundIndex] << "\t| " << animalAgeArray[foundIndex] << "\t| "
             << animalWeightArray[foundIndex] << "\t| " << animalHeightArray[foundIndex] << "\t| "
             << animalFoodPerDayArray[foundIndex] << "\t| " << animalCategoryArray[foundIndex] << "\t| "
             << animalHabitatArray[foundIndex] << endl;
    }
    else
    {
        cout << " Animal Not Found " << endl;
        cout << " Try Again " << endl;
    }
}
void updateAnimal(string animalNameArray[], int animalAgeArray[], float animalWeightArray[], float animalHeightArray[],
                  float animalFoodPerDayArray[], string animalCategoryArray[], string animalHabitatArray[], int index)
{
    cout << " Enter Animal Name to Update Record: ";
    string searchAnimal;
    cin >> searchAnimal;
    bool found = false;
    int foundIndex = -1;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] == searchAnimal)
        {
            found = true;
            foundIndex = i;
            break;
        }
    }
    if (found)
    {
        cout << " Old Record of Animal " << endl;
        cout << " No. |\t Name \t| Age | Weight | Height | Food Per Day | Category | Habitat " << endl;
        cout << foundIndex + 1 << " |\t "
             << animalNameArray[foundIndex] << "\t| " << animalAgeArray[foundIndex] << "\t| "
             << animalWeightArray[foundIndex] << "\t| " << animalHeightArray[foundIndex] << "\t| "
             << animalFoodPerDayArray[foundIndex] << "\t| " << animalCategoryArray[foundIndex] << "\t| "
             << animalHabitatArray[foundIndex] << endl;
        cout << endl;
        cout << " Enter New Details For Animal " << endl;
        string animalName, animalCategory, animalHabitat;
        int animalAge;
        float animalWeight, animalHeight, animalFood;
        cout << " Enter Animal Name: ";
        cin >> animalName;
        cout << " Enter Animal Age: ";
        cin >> animalAge;
        cout << " Enter Animal Weight: ";
        cin >> animalWeight;
        cout << " Enter Animal Height: ";
        cin >> animalHeight;
        cout << " Enter Food Per Day: ";
        cin >> animalFood;
        // Category Validation
        while (true)
        {
            cout << " Enter Animal Category (Carnivore/Herbivore/Omnivore): ";
            cin >> animalCategory;
            if (animalCategory == "Carnivore" || animalCategory == "Herbivore" || animalCategory == "Omnivore")
                break;
            cout << " Invalid Category. Please Enter Correct Category." << endl;
        }
        // Habitat Validation
        while (true)
        {
            cout << " Enter Animal Habitat (Jungle/Forest/Grassland/Savannah/Water/Desert): ";
            cin >> animalHabitat;
            if (animalHabitat == "Jungle" || animalHabitat == "Forest" || animalHabitat == "Grassland" ||
                animalHabitat == "Savannah" || animalHabitat == "Water" || animalHabitat == "Desert")
                break;
            cout << " Invalid Habitat. Please Try Again." << endl;
        }
        // Update Record
        animalNameArray[foundIndex] = animalName;
        animalAgeArray[foundIndex] = animalAge;
        animalWeightArray[foundIndex] = animalWeight;
        animalHeightArray[foundIndex] = animalHeight;
        animalFoodPerDayArray[foundIndex] = animalFood;
        animalCategoryArray[foundIndex] = animalCategory;
        animalHabitatArray[foundIndex] = animalHabitat;
        cout << endl;
        cout << " Animal Record Updated Successfully " << endl;
    }
    else
    {
        cout << " Animal Not Found." << endl;
        cout << " Try Again..." << endl;
    }
}
void sortAnimals(string animalNameArray[], int animalAgeArray[], float animalWeightArray[], float animalHeightArray[],
                 float animalFoodPerDayArray[], string animalCategoryArray[], string animalHabitatArray[], int index,
                 string animalZoneArray[], string animalHealthStatusArray[])
{
    float aggregateScoreArray[100];
    for (int i = 0; i < index; i++)
    {
        aggregateScoreArray[i] =
            (animalAgeArray[i] * 0.2f) +
            (animalWeightArray[i] * 0.3f) +
            (animalFoodPerDayArray[i] * 0.5f);
    }
    // Sorting animals based on aggregate score (descending)
    for (int i = 0; i < index; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            if (aggregateScoreArray[i] < aggregateScoreArray[j])
            {
                string tempName = animalNameArray[i];
                animalNameArray[i] = animalNameArray[j];
                animalNameArray[j] = tempName;
                int tempAge = animalAgeArray[i];
                animalAgeArray[i] = animalAgeArray[j];
                animalAgeArray[j] = tempAge;
                float tempWeight = animalWeightArray[i];
                animalWeightArray[i] = animalWeightArray[j];
                animalWeightArray[j] = tempWeight;
                float tempHeight = animalHeightArray[i];
                animalHeightArray[i] = animalHeightArray[j];
                animalHeightArray[j] = tempHeight;
                float tempFood = animalFoodPerDayArray[i];
                animalFoodPerDayArray[i] = animalFoodPerDayArray[j];
                animalFoodPerDayArray[j] = tempFood;
                string tempCategory = animalCategoryArray[i];
                animalCategoryArray[i] = animalCategoryArray[j];
                animalCategoryArray[j] = tempCategory;
                string tempHabitat = animalHabitatArray[i];
                animalHabitatArray[i] = animalHabitatArray[j];
                animalHabitatArray[j] = tempHabitat;
                string tempHealth = animalHealthStatusArray[i];
                animalHealthStatusArray[i] = animalHealthStatusArray[j];
                animalHealthStatusArray[j] = tempHealth;
                float tempScore = aggregateScoreArray[i];
                aggregateScoreArray[i] = aggregateScoreArray[j];
                aggregateScoreArray[j] = tempScore;
            }
        }
    }
    cout << " Animal Priority List " << endl;
    cout << " No. |\t Name \t| Age | Score |" << endl;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] != "")
        {
            cout << i + 1 << " |\t "
                 << animalNameArray[i] << "\t| "
                 << animalAgeArray[i] << "\t| "
                 << aggregateScoreArray[i] << endl;
        }
    }
    cout << endl;
    // Allocation System (Zoo Zones)
    int lionZone = 2, forestZone = 5, waterZone = 3;
    for (int i = 0; i < index; i++)
    {
        if (animalCategoryArray[i] == "Carnivore" && lionZone > 0)
        {
            animalZoneArray[i] = "Lion Zone";
            lionZone--;
        }
        else if (animalHabitatArray[i] == "Forest" && forestZone > 0)
        {
            animalZoneArray[i] = "Forest Zone";
            forestZone--;
        }
        else if (animalHabitatArray[i] == "Water" && waterZone > 0)
        {
            animalZoneArray[i] = "Water Zone";
            waterZone--;
        }
        else
        {
            animalZoneArray[i] = "Not Allocated";
        }
    }
    cout << " Animal Priority Result " << endl;
    cout << " No. |\t Name \t| Score | Zone/Status " << endl;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] != "")
        {
            cout << i + 1 << " |\t "
                 << animalNameArray[i] << "\t| "
                 << aggregateScoreArray[i] << "\t| "
                 << animalZoneArray[i] << endl;
        }
    }
}
void deleteAnimalRecord(string animalNameArray[], int animalAgeArray[], float animalWeightArray[], float animalHeightArray[],
                        float animalFoodPerDayArray[], string animalCategoryArray[], string animalHabitatArray[], int index,
                        string animalHealthStatusArray[], string animalZoneArray[])
{
    cout << " Enter Animal Name to Delete Record: ";
    string searchName;
    cin >> searchName;
    bool found = false;
    int foundIndex = -1;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] == searchName)
        {
            found = true;
            foundIndex = i;
            break;
        }
    }
    if (found)
    {
        animalNameArray[foundIndex] = "";
        animalAgeArray[foundIndex] = 0;
        animalWeightArray[foundIndex] = 0;
        animalHeightArray[foundIndex] = 0;
        animalFoodPerDayArray[foundIndex] = 0;
        animalCategoryArray[foundIndex] = "";
        animalHabitatArray[foundIndex] = "";
        animalHealthStatusArray[foundIndex] = "";
        animalZoneArray[foundIndex] = "";
        cout << " Record of " << searchName << " Deleted Successfully " << endl;
    }
    else
    {
        cout << " Animal Not Found " << endl;
        cout << " Try Again " << endl;
    }
}
void displayVisitorMenu()
{
    cout << endl;
    cout << " -----------------------------------" << endl;
    cout << " ------ ZOO VISITOR MENU ----------" << endl;
    cout << " -----------------------------------" << endl;
    cout << " Welcome to the Zoo! " << endl;
    cout << endl;
    cout << " 1. View All Animals " << endl;
    cout << " 2. Search Animal " << endl;
    cout << " 3. Zoo Timings " << endl;
    cout << " 4. Ticket Prices " << endl;
    cout << " 5. Visitor Rules " << endl;
    cout << " 6. Exit Visitor Menu " << endl;
    cout << endl;
}
void displayAnimals(string animalNameArray[], string animalCategoryArray[], string animalHabitatArray[], int index)
{
    cout << " Animals in the Zoo " << endl;
    cout << endl;
    cout << " No |\t Name \t| Category | Habitat " << endl;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] != "")
        {
            cout << i + 1 << " |\t " << animalNameArray[i]
                 << "\t| " << animalCategoryArray[i]
                 << "\t| " << animalHabitatArray[i] << endl;
        }
    }
}
void searchAnimal(string animalNameArray[], string animalCategoryArray[], string animalHabitatArray[], int index)
{
    cout << " Enter Animal Name to Search: ";
    string searchAnimal;
    cin >> searchAnimal;
    bool found = false;
    int foundIndex = -1;
    for (int i = 0; i < index; i++)
    {
        if (animalNameArray[i] == searchAnimal)
        {
            found = true;
            foundIndex = i;
            break;
        }
    }
    if (found)
    {
        cout << endl;
        cout << " Name: " << animalNameArray[foundIndex] << endl;
        cout << " Category: " << animalCategoryArray[foundIndex] << endl;
        cout << " Habitat: " << animalHabitatArray[foundIndex] << endl;
    }
    else
    {
        cout << " Animal Not Found " << endl;
    }
}
int main()
{
    const int totalAnimals = 100;
    int index = 10;
    // animal data
    string animalNameArray[totalAnimals] = {"Lion", "Tiger", "Elephant", "Zebra", "Giraffe", "Bear", "Monkey", "Deer", "Kangaroo", "Panda"};
    int animalAgeArray[totalAnimals] = {12, 10, 25, 8, 15, 14, 6, 7, 9, 11};
    float animalWeightArray[totalAnimals] = {190.5, 220.3, 540.8, 300.2, 450.6, 280.4, 40.5, 150.3, 85.7, 120.9};
    float animalHeightArray[totalAnimals] = {4.0, 3.5, 10.2, 5.1, 16.4, 6.0, 2.5, 4.3, 5.8, 4.5};
    float animalFoodPerDayArray[totalAnimals] = {8.5, 10.0, 50.0, 15.0, 25.0, 12.0, 3.0, 6.5, 7.2, 9.1};
    // Animal Categories
    string animalCategoryArray[totalAnimals] = {"Carnivore", "Carnivore", "Herbivore", "Herbivore",
                                                "Herbivore", "Omnivore", "Omnivore", "Herbivore", "Herbivore", "Omnivore"};
    // Animal Habitats
    string animalHabitatArray[totalAnimals] = {"Jungle", "Forest", "Grassland", "Grassland", "Savannah",
                                               "Forest", "Jungle", "Forest", "Australia", "Bamboo Forest"};
    // Animal Food Types
    string animalFoodTypeArray[totalAnimals] = {"Meat", "Meat", "Plants", "Grass", "Leaves",
                                                "Fish", "Fruits", "Grass", "Grass", "Bamboo"};
    // Animal Health Status
    string animalHealthStatusArray[totalAnimals] = {"Healthy", "Healthy", "Sick", "Healthy", "Healthy",
                                                    "Under Treatment", "Healthy", "Healthy", "Healthy", "Sick"};
    // Animal Daily Expenses
    float animalDailyExpenseArray[totalAnimals] = {5000, 4500, 7000, 3000, 6000, 4000, 1500, 2500, 3500, 5500};
    // zone array
    string animalZoneArray[totalAnimals];

    while (true)
    {
        system("cls");
        cout << endl;
        cout << " ----------------------------------------------------" << endl;
        cout << " -------- WELCOME TO ZOO MANAGEMENT SYSTEM ----------" << endl;
        cout << " ----------------------------------------------------" << endl;
        cout << endl;
        cout << " USER MENU: " << endl;
        cout << " 1. Admin " << endl;
        cout << " 2. Visitor " << endl;
        cout << " 3. Exit " << endl;
        cout << endl;
        cout << " Choose an Option: ";
        string userOption;
        cin >> userOption;

        // ===================== ADMIN =====================
        if (userOption == "1")
        {
            bool loginSuccess = false;
            int adminAttempts;
            for (adminAttempts = 0; adminAttempts < 3; adminAttempts++)
            {
                system("cls");
                cout << endl;
                cout << " Attempt " << adminAttempts + 1 << " of 3" << endl;
                cout << " Enter Your Credentials to Login " << endl;
                cout << " Enter Admin Name: ";
                string adminName;
                cin >> adminName;
                cout << " Enter Admin Password: ";
                string adminPassword;
                cin >> adminPassword;
                if (adminName == "admin" && adminPassword == "1234")
                {
                    loginSuccess = true;
                    break;
                }
                else
                {
                    cout << " Incorrect credentials. Press Any Key to Try Again..." << endl;
                    getch();
                }
            }
            if (!loginSuccess)
            {
                system("cls");
                cout << endl;
                cout << " 3 Failed Attempts. Access Denied." << endl;
                cout << " Press Any Key to Return to Main Menu..." << endl;
                getch();
                continue;
            }
            system("cls");
            cout << endl;
            cout << " Admin Login Successful!" << endl;
            getch();

            // Admin Panel loop
            while (true)
            {
                system("cls");
                displayAdminMenu();
                string adminOption;
                cin >> adminOption;

                // Show All Animals
                if (adminOption == "1")
                {
                    system("cls");
                    displayAnimalsAdmin(animalNameArray, animalAgeArray, animalWeightArray, animalHeightArray,
                                   animalFoodPerDayArray, animalCategoryArray, animalHabitatArray, index);
                    cout << " Press Any Key to Return to Admin Menu ";
                    getch();
                }
                // Add New Animal
                else if (adminOption == "2")
                {
                    system("cls");
                    addAnimal(animalNameArray, animalAgeArray, animalWeightArray, animalHeightArray,
                              animalFoodPerDayArray, animalCategoryArray, animalHabitatArray, index, totalAnimals,
                              animalDailyExpenseArray, animalFoodTypeArray, animalHealthStatusArray, animalZoneArray);
                    cout << " Press Any Key to Return to Admin Menu..." << endl;
                    getch();
                }
                // Search Animal
                else if (adminOption == "3")
                {
                    system("cls");
                    searchAnimalAdmin(animalNameArray, animalAgeArray, animalWeightArray, animalHeightArray,
                                      animalFoodPerDayArray, animalCategoryArray, animalHabitatArray, index);
                    cout << " Press Any Key to Return to Admin Menu " << endl;
                    getch();
                }
                // Update Animal Information
                else if (adminOption == "4")
                {
                    system("cls");
                    updateAnimal(animalNameArray, animalAgeArray, animalWeightArray, animalHeightArray,
                                 animalFoodPerDayArray, animalCategoryArray, animalHabitatArray, index);
                    cout << " Press Any Key To Return To Admin Menu..." << endl;
                    getch();
                }
                // Show Animal Health Report
                else if (adminOption == "5")
                {
                    system("cls");
                    // Generate Animal Priority Score
                    sortAnimals(animalNameArray, animalAgeArray, animalWeightArray, animalHeightArray,
                                animalFoodPerDayArray, animalCategoryArray, animalHabitatArray, index,
                                animalZoneArray, animalHealthStatusArray);
                    cout << " Press Any Key to Return to Admin Menu..." << endl;
                    getch();
                }
                // Delete Animal Record
                else if (adminOption == "6")
                {
                    system("cls");
                    deleteAnimalRecord(animalNameArray, animalAgeArray, animalWeightArray, animalHeightArray,
                                       animalFoodPerDayArray, animalCategoryArray, animalHabitatArray, index,
                                       animalHealthStatusArray, animalZoneArray);
                    cout << " Press Any Key to Return to Admin Menu " << endl;
                    getch();
                }
                // Logout
                else if (adminOption == "7")
                {
                    cout << " Logging Out from Admin Panel " << endl;
                    getch();
                    break;
                }
                else
                {
                    system("cls");
                    cout << " Invalid Option Selected " << endl;
                    cout << " Please Try Again " << endl;
                    cout << " Press Any Key to Continue... " << endl;
                    getch();
                }
            } // end admin panel loop
        }

        // ===================== VISITOR =====================
        else if (userOption == "2")
        {
            // FIX: visitorOption is now declared inside the visitor block with its own loop
            while (true)
            {
                system("cls");
                displayVisitorMenu();
                cout << " Select an Option: ";
                string visitorOption;
                cin >> visitorOption;

                if (visitorOption == "1")
                {
                    system("cls");
                    displayAnimals(animalNameArray, animalCategoryArray, animalHabitatArray, index);
                    cout << endl;
                    cout << " Press Any Key to Return to Visitor Menu ";
                    getch();
                }
                else if (visitorOption == "2")
                {
                    system("cls");
                    searchAnimal(animalNameArray, animalCategoryArray, animalHabitatArray, index);
                    cout << " Press Any Key to Return to Visitor Menu " << endl;
                    getch();
                }
                else if (visitorOption == "3")
                {
                    system("cls");
                    cout << " Zoo Timings " << endl;
                    cout << " Opening Time : 9:00 AM " << endl;
                    cout << " Closing Time : 8:00 PM " << endl;
                    cout << " Press Any Key to Return to Visitor Menu " << endl;
                    getch();
                }
                else if (visitorOption == "4")
                {
                    system("cls");
                    cout << " Ticket Prices " << endl;
                    cout << " Adult Ticket  : 1000 RS " << endl;
                    cout << " Child Ticket  : 500 RS " << endl;
                    cout << " Press Any Key to Return to Visitor Menu " << endl;
                    getch();
                }
                else if (visitorOption == "5")
                {
                    system("cls");
                    cout << " Visitor Rules " << endl;
                    cout << " 1. Do not feed animals " << endl;
                    cout << " 2. Keep zoo clean " << endl;
                    cout << " 3. Do not tease animals " << endl;
                    cout << " Press Any Key to Return to Visitor Menu " << endl;
                    getch();
                }
                else if (visitorOption == "6")
                {
                    cout << " Returning to Main Menu... " << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << " Invalid Option! Please Try Again. " << endl;
                    getch();
                }
            } // end visitor loop
        }

        // Exit
        else if (userOption == "3")
        {
            cout << endl;
            cout << " Thank You for Using Zoo Management System " << endl;
            break;
        }
        // Invalid Option
        else
        {
            cout << endl;
            cout << " Invalid Option! Please Try Again. " << endl;
            getch();
        }
    }
}
   
