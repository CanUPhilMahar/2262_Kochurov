#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int &x : v) {
        cin >> x;
    }

    int last = v.back();

    for (int &x : v) {
        x += last;
    }

    int positive = 0;
    int negative = 0;

    for (int x : v) {
        if (x > 0) {
            ++positive;
        } else if (x < 0) {
            ++negative;
        }
    }

    cout << positive << " " << negative << endl;

    return 0;
}
