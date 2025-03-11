#include <iostream>
using namespace std;
typedef long long int ll;

bool isSquare(ll l, ll r, ll d, ll u) {
    return (l == r && r == d && d == u);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll l, r, d, u;
        cin >> l >> r >> d >> u;
        cout << (isSquare(l, r, d, u) ? "YES" : "NO") << '\n';
    }
}
