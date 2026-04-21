#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int totalstudents = 1000;
    int index = 8;
    // data structure
    string nameArray[totalstudents] = {"sonia", "majid", "amjad", "shafia", "rafia", "arham", "areej", "ahmed"};
    int ageArray[totalstudents] = {20, 21, 19, 20, 19, 22, 18, 21};
    float matricArray[totalstudents] = {780, 876, 990, 850, 920, 710, 1010, 880};
    float interArray[totalstudents] = {876, 980, 1150, 900, 1005, 780, 1050, 910};
    float ecatArray[totalstudents] = {243, 260, 300, 210, 285, 190, 320, 240};
    string pref1Array[totalstudents] = {"CS", "CS", "CS", "SE", "CS", "EE", "CS", "SE"};
    string pref2Array[totalstudents] = {"EE", "EE", "EE", "CS", "SE", "SE", "SE", "CS"};
    string pref3Array[totalstudents] = {"SE", "SE", "SE", "EE", "EE", "CE", "EE", "EE"};
    string studentadmissions[totalstudents] = {"CS", "CS", "EE", "SE", "SE", "EE", "SE", "EE"};
    float aggregatemarksArray[totalstudents];
    while (true)
    {
        // main header
        system("cls");
        cout << " endl ";
        cout << endl;
        cout << " -----------------------------------------------------------";
        cout << " ------- welcome to the university management systen -------";
        cout << " -----------------------------------------------------------";
        cout << endl;
        cout << " USER MENU: " << endl;
        cout << " Login to System " << endl;
        cout << " 1  Admin " << endl;
        cout << " 2  Student " << endl;
        cout << " 3  Exit " << endl;
        cout << " Choose an Option: ";
        string useroption;
        cin >> useroption;
        cout << " endl your choose " << useroption << endl;
        if (useroption == "1")
        {
            int adminattempts = 0;
            system(" cls ");
            cout << endl;
            cout << " admin login selected " << endl;
            cout << " admin menu " << endl;
            cout << " you are in admin login " << endl;
            cout << " welcome to the UMS admin plane " << endl;
            cout << " press any key to login " << endl;
            cout << endl;
            getch();
            for (adminattempts = 0; adminattempts < 3; adminattempts++)
            {
                system("cls");
                cout << " attempt " << adminattempts + 1 << " - " << endl;
                cout << " enter your credentials to login " << endl;
                cout << " enter admin name " << endl;
                string adminname;
                cin >> adminname;
                cout << " enter admin password ";
                string adminpassword;
                cin >> adminpassword;
                if (adminname == "admin" && adminpassword == "1234")
                {
                    system(" cls ");
                    cout << endl;
                    cout << " admin login successful";
                    cout << endl;
                    while (true)
                    {
                        system(" cls ");
                        cout << " welcome to the admin plane " << endl;
                        cout << " 1 show all students " << endl;
                        cout << " 2 search students " << endl;
                        cout << " 3 update student information" << endl;
                        cout << " 4 generate student merit list " << endl;
                        cout << " 5 delete option " << endl;
                        cout << " 6 logout " << endl;
                        cout << " select an option ";
                        string adminoption;
                        cin >> adminoption;
                        cout << " you selected an option " << adminoption << "." << endl;
                        if (adminoption == "1")
                        {
                            // show all students
                            cout << " total registered students " << index << endl;
                            cout << " student list " << endl;
                            cout << "No. |\t Name \t| Age |Matric Marks | Inter Marks | ECAT Marks | Pref 1 | Pref 2 | Pref 3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << i + 1 << " |\t " << nameArray[i] << "\t| " << ageArray[i] << "\t| "
                                         << matricArray[i] << " \t| " << interArray[i] << " \t| " << ecatArray[i]
                                         << " \t| " << pref1Array[i] << " \t| " << pref2Array[i]
                                         << " \t| " << pref3Array[i] << endl;
                                }
                            }
                            cout << " press any key to return to the admin menu " << endl;
                            getch();
                        }
                        else if (adminoption == "2")
                        {
                            // search student by name
                            cout << " enter student name to search ";
                            string searchname;
                            cin >> searchname;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == searchname)
                                {
                                    found = true;
                                    foundindex = i;
                                    break;
                                }
                            }
                            if (found)
                            {
                                cout << "No. |\t Name \t| Age |Matric Marks | Inter Marks | ECAT Marks | Pref 1 | Pref 2 | Pref 3" << endl;
                                cout << foundindex + 1 << " |\t " << nameArray[foundindex] << " \t| " << ageArray[foundindex] << " \t| "
                                     << matricArray[foundindex] << " \t| " << interArray[foundindex] << " \t| " << ecatArray[foundindex]
                                     << " \t| " << pref1Array[foundindex] << " \t| " << pref2Array[foundindex]
                                     << " \t| " << pref3Array[foundindex] << endl;
                            }
                            else
                            {
                                cout << " student not found " << endl;
                                cout << " try again" << endl;
                            }
                            cout << " press any key to return to the admin menu " << endl;
                            getch();
                        }
                        else if (adminoption == "3")
                        {
                            // update student information
                            cout << " Enter student name to update record of : ";
                            string searchname;
                            cin >> searchname;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == searchname)
                                {
                                    found = true;
                                    foundindex = i;
                                    break;
                                }
                            }
                            if (found)
                            {
                                cout << " old record of student " << endl;
                                cout << "No. |\t Name \t| Age |Matric Marks | Inter Marks | ECAT Marks | Pref 1 | Pref 2 | Pref 3" << endl;
                                cout << foundindex + 1 << " |\t " << nameArray[foundindex] << "\t| " << ageArray[foundindex] << "\t| "
                                     << matricArray[foundindex] << " \t| " << interArray[foundindex] << " \t| " << ecatArray[foundindex]
                                     << " \t| " << pref1Array[foundindex] << " \t| " << pref2Array[foundindex]
                                     << " \t| " << pref3Array[foundindex] << endl;
                                cout << "Enter new details for the student:" << endl;
                                cout << "Name: ";
                                string name;
                                cin >> name;
                                cout << "Age: ";
                                int age;
                                cin >> age;
                                cout << "Matric Marks: ";
                                float matricMarks;
                                cin >> matricMarks;
                                cout << "Inter Marks: ";
                                float interMarks;
                                cin >> interMarks;
                                cout << "ECAT Marks: ";
                                float ecatMarks;
                                cin >> ecatMarks;
                                string pref1, pref2, pref3;
                                cout << " enter CS,SE,and EE as your preferences" << endl;
                                while (true)
                                {
                                    cout << " enter your preferences 1";
                                    cin >> pref1;
                                    if (pref1 == "CS" || pref1 == "SE" || pref1 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << " invalid preferences.please enter CS,SE or EE " << endl;
                                    }
                                }
                                while (true)
                                {
                                    cout << "Enter your Preference 2 ";
                                    cin >> pref2;
                                    if (pref2 == "CS" || pref2 == "SE" || pref2 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                                    }
                                }
                                while (true)
                                {
                                    cout << "Enter your Preference 3: ";
                                    cin >> pref3;
                                    if (pref3 == "CS" || pref3 == "SE" || pref3 == "EE")
                                    {
                                        break; // Valid input, exit the loop
                                    }
                                    else
                                    {
                                        cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                                    }
                                }
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matricMarks;
                                interArray[foundindex] = interMarks;
                                ecatArray[foundindex] = ecatMarks;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Student not found." << endl;
                                cout << "try again..." << endl;
                            }
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }
                        else if (adminoption == "4")
                        {
                            // generate student merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggrecate = matricArray[i] / 1050.0 * 100.0 * 0.3 + interArray[i] / 1100.0 * 100.0 * 0.4 + ecatArray[i] / 400.0 * 100.0 * 0.3;
                                aggregatemarksArray[i] = aggrecate;
                            }
                            // Sorting data on the bases of aggrecate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggregatemarksArray[i] < aggregatemarksArray[j])
                                    {
                                        // Swapping of name
                                        string tempName = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = tempName;
                                        // Swapping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;
                                        // Swapping of matric
                                        float tempmatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempmatric;
                                        // Swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;
                                        // Swapping of ecat
                                        float tempecat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempecat;
                                        // Swapping of pref1
                                        string tempP1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempP1;
                                        // Swapping of pref2
                                        string tempP2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempP2;
                                        // Swapping of pref3
                                        string tempP3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempP3;
                                        // Swapping of aggregate
                                        float tempAgg = aggregatemarksArray[i];
                                        aggregatemarksArray[i] = aggregatemarksArray[j];
                                        aggregatemarksArray[j] = tempAgg;
                                    }
                                }
                            }
                            // code to display aii the data with aggrecate
                            cout << " student list " << endl;
                            cout << "No. |\t Name \t| Age | Aggrecate |" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << i + 1 << " |\t " << nameArray[i] << "\t| " << ageArray[i] << "\t| " << aggregatemarksArray[i] << endl;
                                }
                            }
                            // code to store students
                            // new logic for admission
                            int csSeats = 2, seSeats = 10, eeSeats = 3;
                            for (int i = 0; i < index; i++)
                            {
                                // Check Preference 1
                                if (pref1Array[i] == "CS" && csSeats > 0)
                                {
                                    studentadmissions[i] = "CS";
                                    csSeats;
                                }
                                else if (pref1Array[i] == "SE" && seSeats > 0)
                                {
                                    studentadmissions[i] = "SE";
                                    seSeats;
                                }
                                else if (pref1Array[i] == "EE" && eeSeats > 0)
                                {
                                    studentadmissions[i] = "EE";
                                    eeSeats;
                                }
                                // If Pref 1 is full, Check Preference 2
                                else if (pref2Array[i] == "CS" && csSeats > 0)
                                {
                                    studentadmissions[i] = "CS";
                                    csSeats;
                                }
                                else if (pref2Array[i] == "SE" && seSeats > 0)
                                {
                                    studentadmissions[i] = "SE";
                                    seSeats;
                                }
                                else if (pref2Array[i] == "EE" && eeSeats > 0)
                                {
                                    studentadmissions[i] = "EE";
                                    eeSeats;
                                }
                                // If Pref 2 is full, Check Preference 3
                                else if (pref3Array[i] == "CS" && csSeats > 0)
                                {
                                    studentadmissions[i] = "CS";
                                    csSeats;
                                }
                                else if (pref3Array[i] == "SE" && seSeats > 0)
                                {
                                    studentadmissions[i] = "SE";
                                    seSeats;
                                }
                                else if (pref3Array[i] == "EE" && eeSeats > 0)
                                {
                                    studentadmissions[i] = "EE";
                                    eeSeats;
                                }
                                else
                                {
                                    studentadmissions[i] = "Not Admitted";
                                }
                            }
                            // display the result
                            cout << " Admission Result " << endl;
                            cout << " No.|\t Name \t| Aggregate |Status" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == "1")
                                {
                                    cout << i + 1 << " |\t " << nameArray[i] << "\t"
                                         << aggregatemarksArray[i] << "\t|" << studentadmissions[i] << endl;
                                }
                            }
                            getch();
                        }
                        else if (adminoption == "5")
                        {
                            // delete student record
                            cout << " enter student name to delete the record of ";
                            string searchname;
                            cin >> searchname;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == searchname)
                                {
                                    found = true;
                                    foundindex = i;
                                    break;
                                }
                            }
                            if (found)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << " record of " << searchname << " deleted " << endl;
                            }
                            else
                            {
                                cout << " student not found " << endl;
                                cout << " try again " << endl;
                            }
                            cout << " press any key to return to the admin menu " << endl;
                            getch();
                        }
                        else if (adminoption == "6")
                        {
                            cout << " logging out from admin plane " << endl;
                            cout << " press enter to confirm logout " << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << " invalid option selected .please choose betweem 1-6 " << endl;
                            cout << " try again " << endl;
                            getch();
                        }
                    }
                    cout << " press any key to return to the main menu " << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << " invalid credentials " << endl;
                    if (adminattempts < 2)
                    {
                        cout << " try again " << endl;
                        getch();
                    }
                    else
                    {
                        cout << " endl account locked too many attempts " << endl;
                        getch();
                    }
                }
            }
        }
        else if (useroption == "2")
        {
            system("cls");
            // call student login function
            cout << endl;
            cout << " student login selected " << endl;
            cout << " student menu " << endl;
            cout << " you are in student login " << endl;
            cout << " welcome to the ums " << endl;
            cout << " student plane " << endl;
            cout << endl;
            cout << "Enter your details to register:" << endl;
            cout << "Name: ";
            string name;
            cin >> name;
            cout << "Age: ";
            int age;
            cin >> age;
            cout << "Matric Marks: ";
            float matricMarks;
            cin >> matricMarks;
            cout << "Inter Marks: ";
            float interMarks;
            cin >> interMarks;
            cout << "ECAT Marks: ";
            float ecatMarks;
            cin >> ecatMarks;
            string pref1, pref2, pref3;
            cout << " enter CS,SE,and EE as your preferences" << endl;
            while (true)
            {
                cout << " enter your preferences 1";
                cin >> pref1;
                if (pref1 == "CS" || pref1 == "SE" || pref1 == "EE")
                {
                    break;
                }
                else
                {
                    cout << " invalid preferences.please enter CS,SE or EE " << endl;
                }
            }
            while (true)
            {
                cout << "Enter your Preference 2 ";
                cin >> pref2;
                if (pref2 == "CS" || pref2 == "SE" || pref2 == "EE")
                {
                    break;
                }
                else
                {
                    cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                }
            }
            while (true)
            {
                cout << "Enter your Preference 3: ";
                cin >> pref3;
                if (pref3 == "CS" || pref3 == "SE" || pref3 == "EE")
                {
                    break; // Valid input, exit the loop
                }
                else
                {
                    cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                }
            }
            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matricMarks;
            interArray[index] = interMarks;
            ecatArray[index] = ecatMarks;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            cout << "Student not found." << endl;
            cout << "try again..." << endl;
          cout << "Press any key to return to the admin menu..." << endl;
          getch();
        }
        else if( userchoice =="3") 
        {
            cout <<" exiting system " <<endl;
            break;
            getch();
        }
        else if( userchoice =="4")
        {
            cout << " invalid opion select ";
            cout << "try again";
            getch();
        }
    }
}

