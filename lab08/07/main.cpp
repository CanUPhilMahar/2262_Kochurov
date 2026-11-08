#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int x;

    while (cin >> x) {
        a.push_back(x);
    }

    bool found = false;

    for (int v : a) {
        if (v < 0) {
            cout << v << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Отрицательных чисел нет" << endl;
    }

    return 0;
}
