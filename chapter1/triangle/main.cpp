#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
  int n, a[MAX_N];
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        int len = a[i] + a[j] + a[k];
        int ma = max(a[i], max(a[j], a[k]));
        int rest = len - ma;
        if (ma < rest) {
          ans = max(ans, len);
      }
    }
    }
  }
  cout << ans << endl;
  return 0;
}