#include <iostream>
#include <string>
using namespace std;

// Structure to store basic student details
struct Student {
    int roll;
    string name;
    int marks;
};

// Adds a new student record
void addStudent(Student students[], int &count) {
    cout << "Enter Roll Number: ";
    cin >> students[count].roll;

    cout << "Enter Name: ";
    cin >> students[count].name;

    cout << "Enter Marks: ";
    cin >> students[count].marks;

    count++;  // update total number of students
    cout << "Student added successfully.\n";
}

// Displays all stored student records
void displayStudents(Student students[], int count) {
    if (count == 0) {
        cout << "No student records available.\n";
        return;
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < count; i++) {
        cout << "Roll: " << students[i].roll
             << ", Name: " << students[i].name
             << ", Marks: " << students[i].marks << endl;
    }
}

// Searches a student using roll number (linear search)
void searchStudent(Student students[], int count) {
    int roll;
    cout << "Enter roll number to search: ";
    cin >> roll;

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            cout << "Student Found -> "
                 << students[i].name
                 << ", Marks: " << students[i].marks << endl;
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    Student students[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n---- Student Management System ----\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            addStudent(students, count);
        } 
        else if (choice == 2) {
            displayStudents(students, count);
        } 
        else if (choice == 3) {
            searchStudent(students, count);
        } 
        else if (choice == 4) {
            cout << "Exiting program.\n";
            break;
        } 
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}