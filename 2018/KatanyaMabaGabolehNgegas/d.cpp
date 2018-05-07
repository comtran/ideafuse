//
// Created by Ki Ageng Satria Pamungkas on 5/6/18.
//

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cmath>

typedef long long LL;
typedef double DB;

using namespace std;

struct standing {
    string teamName;
    int point;
};
const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;
const double eps = 1e-13;

bool compare(standing x, standing y) {
    return x.point != y.point ? x.point > y.point : x.teamName < y.teamName;
}

int main() {
    map<string, int> team;
    vector<standing> standings(8);
    for (int i = 0; i < 8; ++i) {
        string s;
        cin >> s;
        team[s] = i;
        standings[i].teamName = s;
        standings[i].point = 0;
    }
    string xyz;
    getline(cin, xyz);
    for (int i = 0; i < 28; ++i) {
        string match;
        string team1 = "", team2 = "";
        getline(cin, match);
//        cout << match << endl;
        int counter = 0;
        while(match[counter] != ' '){
            team1 += match[counter];
            counter++;
        }
        int t1, t2;
        t1 = match[counter + 1] - '0';
        t2 =  match[counter + 5] - '0';
        counter += 7;
        while(counter < match.size()){
            team2 += match[counter];
            counter++;
        }
        if ((t1 > t2) and(match.size() != 0)) {
            standings[team[team1]].point += 1;
//            cout << team1 <<"W"<< endl;
        } else {
            standings[team[team2]].point += 1;
//            cout << team2 <<"W"<< endl;
        }
    }
    sort(standings.begin(), standings.end(), compare);
    for (int i = 0; i < 8; ++i) {
        cout << standings[i].teamName << " " << standings[i].point << endl;
    }
    return 0;
}
