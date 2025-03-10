#include <iostream>
using namespace std;

bool sol(int x, int y) {
    if (y == x + 1) {
        return true;
    }
    int diff = x - y + 1;
    if (diff > 0 && diff % 9 == 0) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (sol(x, y)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}