#include <bits/stdc++.h>
using namespace std;
//193


int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int K, N;
    cin >> K >> N;

    vector<long long> arr(K);
    long long maxLen = 0;

    for (int i = 0; i < K; i++) {
        cin >> arr[i];
        maxLen = max(maxLen, arr[i]);
    }

    long long left = 1, right = maxLen;
    long long answer = 0;

    while(left <= right) {
        long long mid = (left + right) / 2;
        long count = 0;
        for(long long vv : arr) {
            count += vv / mid;
        }

        if(count >= N) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << answer;
    return 0;
}