#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

// Structure to store password information
struct PasswordEntry {
    string service;   // Website or service name
    string username;  // Username
    string password;  // Password for the service
};

// Function to display the menu
void displayMenu() {
    cout << "\nPassword Manager Menu\n";
    cout << "1. Add a new password\n";
    cout << "2. View stored passwords\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
}

// Function to add a new password entry
void addPassword(vector<PasswordEntry>& passwordList) {
    PasswordEntry entry;
    