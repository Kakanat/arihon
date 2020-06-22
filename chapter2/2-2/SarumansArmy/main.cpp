#include <iostream>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using P = pair<int,int>;


int main() {
  int N, R, X[1005];
  cin >> N >> R;
  rep(i,N) cin >> X[i];
  sort(X, X + N);
  int i = 0, ans = 0;
  while (i < N) {
    int s = X[i++];
    while (i < N && X[i] - s <= R) i++;
    int p = X[i-1];
    while (i < N && X[i] - p <= R) i++;
    ans++; 
  }
  cout << ans << endl;
}