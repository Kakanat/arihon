#include <iostream>
#include <vector>
#include <string>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;

const int MAX_N = 100, MAX_M = 100;

class DepthFirstSerch {
  private:
    int n, m;
    char field[MAX_N][MAX_M];
    void dfs(int x, int y) {
      field[x][y] = '.';
      for (int dx = -1; dx <= 1; ++dx) {
        for (int dy = -1; dy <= 1; ++dy) {
          int nx = x + dx, ny = y + dy;
          if (0 <= nx && nx <= n && 0 <= ny && ny <= m && field[nx][ny] == 'W') dfs(nx, ny);
        }
      }
      return;
    }

  public:
    DepthFirstSerch() {
      cin >> n >> m;
      rep(i, n) rep(j, m) cin >> field[i][j];
      int res = 0;
      rep(i, n) rep(j, m) {
        if (field[i][j] == 'W') {
          dfs(i, j);
          ++res;
        }
      }
      cout << res << endl;
    }
};

int main() {
  DepthFirstSerch dfs;
  return 0;
}