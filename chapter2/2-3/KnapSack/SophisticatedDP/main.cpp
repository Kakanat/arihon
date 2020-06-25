#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int dp[101][101];

int main() {
  int N, W;
  int w[100], v[100];

  cin >> N;
  rep(i,N) cin >> w[i] >> v[i];
  cin >> W;

  for (int i = N - 1; i >= 0; i--) {
    for (int j = 0; j <= W; j++) {
      if (j < w[i]) {
        dp[i][j] = dp[i + 1][j];
      } else {
        dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
      }
    }
  }
  cout << dp[0][W] << endl;
  return 0;
}