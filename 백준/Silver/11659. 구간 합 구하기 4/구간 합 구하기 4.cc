#include <bits/stdc++.h>
using namespace std;

vector<int> v(100001);

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        v[i] = v[i - 1] + num;
    }    

    while(m--) {
        int i, j;
        cin >> i >> j;
        cout << v[j] - v[i - 1] << "\n";
    }
    return 0;
}
