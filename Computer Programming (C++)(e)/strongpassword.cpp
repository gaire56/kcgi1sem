/*
GAIRE ANANTA PRASAD
M24W0272*/

#include <iostream>
#include <string>

bool isStrongPassword(const std::string& password) {
    // Check if password length is at least 8 characters
    if (password.length() < 8)
        return false;
    bool hasDigit = false;
    bool hasSpecial = false;
    bool hasUpperCase = false;
    // Check each character in the password
    for (char ch : password) {
        // Check if the character is a digit
        if (isdigit(ch))
            hasDigit = true;
        // Check if the character is a special character
        if (!isalnum(ch))
            hasSpecial = true;
        // Check if the character is an uppercase letter
        if (isupper(ch))
            hasUpperCase = true;
        // If all conditions are met, return true
        if (hasDigit && hasSpecial && hasUpperCase)
            return true;
    }
    // If any condition is not met, return false
    return false;
}
int main() {
    std::string password;
    std::cout << "Enter your password: ";
    std::cin >> password;

    if (isStrongPassword(password)) {
        std::cout << "Strong password!" << std::endl;
    } else {
        std::cout << "Weak password! Please make sure it has at least 8 characters, "
                     "contains at least one number, one special character, and one uppercase letter." << std::endl;
    }
    return 0;
}
