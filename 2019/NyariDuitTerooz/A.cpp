#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int a, b;
    cin >> a >> b;

    int n = a + b;
    int ans = 0;
    if (n < 100) ans = 100 - n;

    cout << "Case #" << i << ": " << ans << endl;
  }

  return 0;
}
