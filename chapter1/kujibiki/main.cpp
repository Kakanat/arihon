#include <iostream>
using namespace std;

const int MAX_N = 50;

int main() {
    int n, m, k[MAX_N];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> k[i];
    }
    for (int a = 0; a < n; ++a) {
        for (int b = a; b < n; ++b) {
            for (int c = b; c < n; ++c) {
                for (int d = c; d < n; ++d) {
                    if (k[a] + k[b] + k[c] + k[d] == m) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}