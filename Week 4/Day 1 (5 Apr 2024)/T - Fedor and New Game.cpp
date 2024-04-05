#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> arr(m);
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }
  int fed;
  cin >> fed;
  int result = 0;
  for (int i = 0; i < m; i++) {
    int xo = fed ^ arr[i];
    if (__builtin_popcount(xo) <= k)
      result++;
  }

  cout << result;


  return 0;
}