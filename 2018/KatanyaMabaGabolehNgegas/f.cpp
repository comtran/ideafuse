#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll n, m;
  scanf("%lld%lld", &n, &m);

  ll p = abs(m);
  if (p > n)
    printf("NO");
  else {
    if (p == n)
      printf("YES");
    else {
      ll x = n - p;
      if (x % 2)
        printf("NO");
      else
        printf("YES");
    }
  }

  printf("\n");

  return 0;
}

