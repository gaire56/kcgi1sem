#include <iostream>
#include <map>
#include <string>

using namespace std;

// User structure to store user data
struct User {
    string username;
    string password;
};

// Database to store user data
map<string, User> users;

// Function to register a new user
void registerUser() {
    User newUser;
    cout << "Enter username: ";
    cin >> newUser.username;
    cout << "Enter password: ";
    cin >> newUser.password;
    // Store the new user in the database
    users[newUser.username] = newUser;
    cout << "Registration successful!\n";
}

// Function to authenticate user login
bool loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    // Check if the username exists in the database
    if (users.find(username) != users.end()) {
        // Check if the entered password matches the stored password
        if (users[username].password == password) {
            cout << "Login successful!\n";
            return true;
        } else {
            cout << "Incorrect password!\n";
        }
    } else {
        cout << "Username not found!\n";
    }
    return false;
}

int main() {
    int choice;
    do {
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (loginUser()) {
                    // If login successful, exit the loop
                    break;
                }
                // If login unsuccessful, prompt again
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
