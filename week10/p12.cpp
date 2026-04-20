#include <iostream>
using namespace std;

const int MAX = 100;

bool login() {
    string user, pass;

    for (int i = 0; i < 3; i++) {
        cout << "Username: ";
        cin >> user;

        cout << "Password: ";
        cin >> pass;

        if (user == "admin" && pass == "1234") {
            cout << "Login Successful" << endl;
            return true;
        } else {
            cout << "Wrong Login" << endl;
        }
    }

    cout << "Access Denied" << endl;
    return false;
}

void menu() {
    cout << "\n--- MENU ---\n";
    cout << "1. Add Student\n";
    cout << "2. View Students\n";
    cout << "3. Add Course\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void addStudent(string names[], int ages[], int &count) {
    if (count >= MAX) return;

    cout << "Name: ";
    cin >> names[count];

    cout << "Age: ";
    cin >> ages[count];

    count++;
}

void viewStudents(string names[], int ages[], int count) {
    for (int i = 0; i < count; i++) {
        cout << names[i] << " - " << ages[i] << endl;
    }
}

void addCourse(string courses[], int &count) {
    if (count >= MAX) return;

    cout << "Course: ";
    cin >> courses[count];

    count++;
}

int main() {
    if (!login()) return 0;

    string names[MAX], courses[MAX];
    int ages[MAX];
    int studentCount = 0, courseCount = 0;
    int choice;

    while (true) {
        menu();
        cin >> choice;

        if (choice == 1)
            addStudent(names, ages, studentCount);
        else if (choice == 2)
            viewStudents(names, ages, studentCount);
        else if (choice == 3)
            addCourse(courses, courseCount);
        else
            break;
    }

    return 0;
}