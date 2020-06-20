#include <iostream>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using P = pair<int,int>;

const int MAX_N = 2005;

int main() {
  int N;
  char S[MAX_N];
  cin >> N;
  rep(i,N) cin >> S[i];
  int a = 0, b = N - 1;
  while (a <= b) {
    bool left = false;
    for (int i = 0; a + i <= b; ++i) {
      if (S[a + i] < S[b - i]) {
        left = true;
        break;
      }
      else if (S[a + i] > S[b - i]) {
        left = false;
        break;
      }
    }
    if (left) cout << S[a++];
    else cout << S[b--];
  }

  cout << endl;



  return 0;
}