#include <iostream>
#include <queue>
#include <vector>
#include <string>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

const long long INF = 1e08;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};
const int MAX_N = 100, MAX_M = 100;



class BreadthFirstSearch {
  private:
    int n, m;
    char maze[MAX_N][MAX_M + 1];
    int sx, sy, gx, gy;
    int d[MAX_N][MAX_M];
    int bfs() {
      queue<P> que;
      rep(i, n) rep(j, m) d[i][j] = INF;
      rep(i, n) rep(j, m) {
        if (maze[i][j] == 'S') {sx = i; sy = j;}
        if (maze[i][j] == 'G') {gx = i; gy = j;}
      }
      que.push(P(sx, sy));
      d[sx][sy] = 0;
      while (que.size()) {
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy) break;
        rep(i, 4) {
          int nx = p.first + di[i], ny = p.second + dj[i];
          if (0 <= nx && nx <= n && 0 <= ny && ny <= m &&
              maze[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
          }
        }
      }
      return d[gx][gy];
    }

  public:
    BreadthFirstSearch() {
      cin >> n >> m;
      rep(i, n) rep(j, m) cin >> maze[i][j];
      int res = bfs();
      cout << res << endl;
      
    }
};

int main() {
  BreadthFirstSearch bfs;
  return 0;
}