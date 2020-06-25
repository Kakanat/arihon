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


int N, W;
int w[100], v[100];

// i番目以降の品物から重さの総和がj以下となるように選ぶ
int rec(int i, int j) {
  int res;
  if (i == N) {
    res = 0;
  } else if (j < w[i]) {
    res = rec(i + 1, j);
  } else {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  return res;
}

int main() {
  cin >> N;
  rep(i,N) cin >> w[i] >> v[i];
  cin >> W;
  int ans = rec(0,W);
  cout << ans << endl;
  return 0;
}