#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    if(a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n = 0;
    cin >> n;
    vector<string> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), compare);
    
for(int i=0; i<n; i++) {
    // 맨 처음이거나, 앞 단어랑 다르면 출력
    if(i == 0 || v[i] != v[i-1]) {
        cout << v[i] << '\n';
    }
}           

    return 0;
}