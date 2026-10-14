#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    char op;
    cin >> op;

    if (op == 'S') {
        stack<char> st;
        queue<char> qpass;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                continue;
            }
            if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
                for (int j = 1; j <= s[i] - '0'; j++) {
                    if (!st.empty()) {
                        qpass.push(st.top());
                        st.pop();
                    }
                    else {
                        break;
                    }
                }
            }
            else {
                st.push(s[i]);
            }
        }
        while(!qpass.empty()) {
            cout << qpass.front() << " ";
            qpass.pop();
        }
        cout << endl;
        if (st.empty()) {
            cout << "empty";
        }
        else {
            while(!st.empty()) {
                cout << st.top() << " ";
                st.pop();
            }
        }
        return 0;
    }
    else if (op == 'Q') {
        queue<char> q;
        queue<char> qpass;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                continue;
            }
            if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
                for (int j = 1; j <= s[i] - '0'; j++) {
                    if (!q.empty()) {
                        qpass.push(q.front());
                        q.pop();
                    }
                    else {
                        break;
                    }
                }
            }
            else {
                q.push(s[i]);
            }
        }
        while(!qpass.empty()) {
            cout << qpass.front() << " ";
            qpass.pop();
        }
        cout << endl;
        if (q.empty()) {
            cout << "empty";
        }
        else {
            while(!q.empty()) {
                cout << q.front() << " ";
                q.pop();
                
            }
        }
        return 0;
    }
}