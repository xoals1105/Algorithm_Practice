//193
#include <bits/stdc++.h>
using namespace std;

int s[305]; // 계단 점수 (score)
int d[305]; // DP 테이블 (최대 점수)
int n;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];

    // 1. 초기값 설정 (매우 중요!)
    d[1] = s[1];
    d[2] = s[1] + s[2]; // 1, 2번 연속 밟는 게 무조건 이득
    d[3] = max(s[1] + s[3], s[2] + s[3]); // (1->3) vs (2->3) 중 큰 거

    // 2. 점화식 (4번 계단부터 n번까지)
    for(int i = 4; i <= n; i++) {
        // 아까 만든 공식 그대로!
        d[i] = max(d[i-2], d[i-3] + s[i-1]) + s[i];
    }

    cout << d[n];
    return 0;
}   