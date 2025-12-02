//193
#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cin >> v[i][j];
        }
    }


    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            v[i][j] = v[i][j] + max(v[i + 1][j], v[i + 1][j + 1]);
        }
    }

    cout << v[0][0];

    return 0;
}   