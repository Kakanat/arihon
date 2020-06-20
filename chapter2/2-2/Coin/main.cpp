#include <iostream>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};

int main() {
  int C[6], A;
  rep(i, 6) cin >> C[i];
  cin >> A;
  int ans = 0;
  for (int i = 5; i >= 0; --i) {
    int t = min(A / V[i], C[i]);
    A -= t * V[i];
    ans += t;
  }

  cout << ans << endl;
  return 0;
}