#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v;

    for(int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        v.push_back(num);
    }
    
    int a = n - 1;
    int count = 0;
    while(k > 0) {
        count += k / v[a];
        k = k % v[a--];
    }

    cout << count;
    return 0;
}