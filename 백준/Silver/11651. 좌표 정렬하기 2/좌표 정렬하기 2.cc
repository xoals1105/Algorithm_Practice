#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n = 0;
    cin >> n;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);
       
    for(pair<int, int> &p : v) {
        cout << p.first << " " << p.second << "\n";
    }
    return 0;
}