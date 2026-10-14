#include <bits/stdc++.h>
using namespace std;

bool checkLength(string &letter) {
    if (letter.size() >= 8) {
        return true;
    }
    else {
        return false;
    }
}
bool checkLower(string &letter) {
    for (int i = 0; i < letter.size(); i++) {
        if (islower(letter[i])) {
            return true;
        }
    }
    return false;
}
bool checkUpper(string &letter) {
    for (int i = 0; i < letter.size(); i++) {
        if (isupper(letter[i])) {
            return true;
        }
    }
    return false;
}
bool checkNumber(string &letter) {
    for (int i = 0; i < letter.size(); i++) {
        if (isdigit(letter[i])) {
            return true;
        }
    }
    return false;
}
bool checkSpecialChar(string &letter) {
    string special = "!@#$%^&*()-+";
    for (int i = 0; i < letter.size(); i++) {
        for (int j = 0; j < special.size(); j++) {
            if (letter[i] == special[j]) {
                return true;
            }
        }
    }
    return false;
}
bool checkDoubleChar(string &letter) {
    for (int i = 2; i < letter.size(); i++) {
        if (letter[i] == letter[i - 1] && letter[i] == letter[i - 2]) {
            return false;
        }
    }
    return true;
}

int main() {
    int num; cin >> num;
    string password;
    while (num--) {
        cin >> password;
        if (checkLength(password) && checkLower(password) && checkUpper(password) && checkNumber(password) && checkSpecialChar(password) && checkDoubleChar(password)) {
            cout << "strong" << endl;
        }
        else {
            cout << "weak" << endl;
        }
    }

    return 0;
}