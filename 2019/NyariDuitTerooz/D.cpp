#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;
    vector<int> cons (n, 0);
    for (int i = 1; i < n; i++) {
      if (s[i] == '0' && s[i] == s[i - 1]) {
        cons[i - 1] = max(cons[i - 1], 1);
        cons[i] = cons[i - 1] + 1;
      }
      else
        ans += cons[i - 1] / 2;
    }

    ans += cons[n - 1] / 2;

    cout << "Case #" << i << ": " << ans << endl;
  }

  return 0;
}
