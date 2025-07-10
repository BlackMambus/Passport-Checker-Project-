#include <iostream>
#include <cctype>
using namespace std;

// Function to check if the passport number is valid
bool isValidPassport(const string& passport) {
    if (passport.length() != 8) {
        return false;
    }

    // Check first two characters are uppercase letters
    if (!isupper(passport[0]) || !isupper(passport[1])) {
        return false;
    }

    // Check remaining six characters are digits
    for (int i = 2; i < 8; ++i) {
        if (!isdigit(passport[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    string passportNumber;
    cout << "Enter passport number: ";
    cin >> passportNumber;

    if (isValidPassport(passportNumber)) {
        cout << "✅ Passport number is valid." << endl;
    } else {
        cout << "❌ Invalid passport number format." << endl;
    }

    return 0;
}

