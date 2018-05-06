
// Solution by : Ganesha Danu (github.com/blinfoldking)

#include <bits/stdc++.h>

using namespace std;

int main () {
    
    map<string, int> rank;

    for (int i = 0; i < 8; i++) {
        string tmp;
        cin >> tmp;
        rank[tmp] = 0;
    }

    for (int i = 0; i < 28; i++) {
        char T1[25];
        int S1;

        char T2[25];
        int S2;

        //string inp;

        scanf("%s %d - %d %s", &T1, &S1, &S2, &T2);

        string res;

        if (S1 > S2)
            res = T1;
        else
            res = T2;        

        rank[res]++;
    }

    vector<pair<int, string>> res;

    for (auto it = rank.begin(); it != rank.end(); it++) {
        pair <int, string> tmp;
        tmp.first = it->second;
        tmp.second = it->first;

        res.push_back(tmp);
    }

    sort(res.begin(), res.end(), [](pair<int, string> e1, pair<int, string> e2) {
        return e1.first > e2.first;
    });


    for (int i = 0; i < 8; i++) {
        cout <<  res[i].second << ' ' << res[i].first << '\n';;
    }

}