#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    string s;
    cin >> s;

    int n = s.size();
    vector<pair<string, string>> tokens;
    for (int i = 0; i < n; i++) {
      string x = "";
      x += s[i];

      if (i < n - 1) x += s[i + 1];

      if (x == "ng") {
        tokens.push_back(make_pair(x, "CON"));
        i++;
      }
      else {
        string type = "CON";
        char c = x[0];
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') type = "VOW";

        if (x.size() > 1) x.pop_back();
        tokens.push_back(make_pair(x, type));
      }
    }

    n = tokens.size();
    vector<bool> conse (n, 0);

    for (int i = 1; i < n; i++) {
      if (tokens[i].second == tokens[i - 1].second) {
        conse[i] = conse[i - 1] = 1;
      }
    }

    string ans = "";
    for (int i = 0; i < n; i++) {
      if (conse[i]) {
        string x = "";
        for (char c : tokens[i].first) x += toupper(c);

        ans += x;
      }
      else
        ans += tokens[i].first;
    }

    cout << "Case #" << i << ": " << ans << endl;
  }

  return 0;
}
