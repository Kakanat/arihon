#include <iostream>
using namespace std;

const int MAX_N = 20;


bool dfs(int i, int n, int k, int* a, int sum);

int main() {
  int n, k, a[MAX_N];
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }   
  if (dfs(0, n, k, a, 0)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

bool dfs(int i, int n, int k, int* a, int sum) {
  if (i == n) return sum == k;
  if (dfs(i + 1, n, k, a, sum)) return true;
  if (dfs(i + 1, n, k, a, sum + a[i])) return true;
  return false;
}


// #include <cstdio>
// #include <vector>

// class DepthFirstSerch {
//  private:
//   int n, k;
//   std::vector<long> a;
//   bool search(int i, int sum) {
//     if (i < n) {
//       if (search(i + 1, sum))
//         return true;
//       if (search(i + 1, sum + a.at(i)))
//         return true;
//     } else if (sum == k)
//       return true;

//     return false;
//   }

//  public:
//   DepthFirstSerch() {
//     std::scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//       long b;
//       std::scanf("%d", &b);
//       a.push_back(b);
//     }
//     std::scanf("%d", &k);

//     if (search(0, 0))
//       std::printf("Yes\n");
//     else
//       std::printf("No\n");
//   }
// };

// int main() {
//   DepthFirstSerch dfs;
//   return 0;
// }