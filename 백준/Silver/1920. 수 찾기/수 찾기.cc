#include <bits/stdc++.h>
using namespace std;

int arr[11];

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cin >> m;
    for(int i = 0; i < m; i++) {
        int target = 0;
        cin >> target;
        cout << binary_search(v.begin(), v.end(), target) << "\n";
    }

    return 0;
}