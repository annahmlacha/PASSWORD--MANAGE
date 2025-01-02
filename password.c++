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