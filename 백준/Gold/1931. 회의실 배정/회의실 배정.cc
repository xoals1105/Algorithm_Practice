#include <bits/stdc++.h>
using namespace std;

bool compart(pair<int, int> &a, pair<int, int> &b) {
    if(a.second != b.second) {
        return a.second < b.second;
    }

    return a.first < b.first;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compart);

    int count = 0;
    int end_time = 0;

    for(int i = 0; i < n; i++) {
        // 지금 보려는 회의 시작 시간이, 앞 회의 끝난 시간보다 뒤라면? (겹치지 않음)
        if (v[i].first >= end_time) {
            count++;            // 회의 잡기
            end_time = v[i].second; // 끝나는 시간 갱신
        }
    }

    cout << count;
    return 0;
}
