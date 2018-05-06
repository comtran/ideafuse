#include <bits/stdc++.h>
using namespace std;

int main() {
  bool first = true;
  int x, b = 0, last, len = 0;

  vector<pair<int, int>> res;

  while (cin >> x) {
    if (first) {
      last = x;
      first = false;
    }

    if (x == last) len++;
    else {
      res.push_back(make_pair(len, last));
      last = x;
      len = 1;
      b += 2;
    }

    if (len == 255) {
      res.push_back(make_pair(len, last));
      len = 0;
      b += 2;
    }
  }

  if (len > 0) {
    res.push_back(make_pair(len, last));
    b += 2;
  }

  printf("%d\n", b);
  for (int i = 0; i < res.size(); i++) {
    auto v = res[i];
    printf("%d %d", v.first, v.second);

    if (i < res.size() - 1) printf(" ");
  }
  printf("\n");

  return 0;
}

