
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    long long sum = 0;

    for (int idx = 0; idx < n * m; ++idx) {
        sum += a[idx / m][idx % m];
    }

    cout << sum << endl;

    return 0;
}
