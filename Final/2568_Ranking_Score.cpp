#include <bits/stdc++.h>
using namespace std;

struct team {
    char name;
    int win;
    int lose;
    int score;
};

int findTeam(vector<team>& vc, char name) {
    for (int i = 0; i < vc.size(); i++) {
        if (vc[i].name == name) {
            return i;
        }
    }
    return -1;
}

int main() {
    int number; cin >> number;
    vector<team> vc;
    for (int i = 0; i < number; i++) {
        char name;
        int win, lose, score;

        cin >> name >> win >> lose >> score;
        vc.push_back(team{name, win, lose, score});
    }
    int r;
    cin >> r;

    for (int i = 0; i < r; i++) {
        char nameA, nameB;
        int setA, setB;

        cin >> nameA >> nameB >> setA >> setB;

        int a = findTeam(vc, nameA);
        int b = findTeam(vc, nameB);

        if (setA > setB) {
            vc[a].win++;
            vc[b].lose++;

            if (setB == 2) {
                vc[a].score += 2;
                vc[b].score += 1;
            } else {
                vc[a].score += 3;
            }
        } else {
            vc[b].win++;
            vc[a].lose++;

            if (setA == 2) {
                vc[b].score += 2;
                vc[a].score += 1;
            } else {
                vc[b].score += 3;
            }
        }
    }

    sort(vc.begin(), vc.end(), [](team a, team b) {
        if (a.score != b.score) {
            return a.score > b.score;
        }
        return a.name < b.name;
    });

    for (int i = 0; i < vc.size(); i++) {
        cout << vc[i].name << " "
             << vc[i].win << " "
             << vc[i].lose << " "
             << vc[i].score << '\n';
    }

    return 0;
}