#include <iostream>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using P = pair<int,int>;

const int MAX_N = 1e05;

int main() {
  int N, S[MAX_N], T[MAX_N];
  cin >> N;
  rep(i,N) cin >> S[i];
  rep(i,N) cin >> T[i];
  P itv[MAX_N];

  rep(i,N) {
    itv[i].first = T[i];
    itv[i].second = S[i];
  }
  sort(itv, itv + N);

  int ans = 0, t = 0;
  rep(i,N) {
    if (t < itv[i].second) {
      ans++;
      t = itv[i].first;
    }
  }
  cout << ans << endl;

  return 0;
}