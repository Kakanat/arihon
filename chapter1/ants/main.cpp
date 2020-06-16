#include <iostream>
using namespace std;

const int MAX_N = 1e06;

int main() {
    int L, n, x[MAX_N];
    cin >> L >> n;
    for (int i = 0; i < n; ++i) cin >> x[i];
    int minT = 0;
    for (int i = 0; i < n; ++i) {
        minT = max(minT, min(x[i], L - x[i]));
    }
    int maxT = 0;
    for (int i = 0; i < n; ++i) {
        maxT = max(maxT, max(x[i], L - x[i]));
    }
    cout << minT << ',' << maxT << endl;
    return 0;
}