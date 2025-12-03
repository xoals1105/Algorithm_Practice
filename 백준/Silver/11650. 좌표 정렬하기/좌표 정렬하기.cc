#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n = 0;
    cin >> n;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
       
    for(int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}