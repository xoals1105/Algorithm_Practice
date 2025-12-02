#include <bits/stdc++.h>
using namespace std;

int arr[11];

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int T = 0;
    cin >> T;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;

    for(int i = 3; i < 11; i++) {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i -3];
    }

    for(int i = 0; i < T; i++) {
        int n = 0;
        cin >> n;
        cout << arr[n - 1] << "\n";
    }

    return 0;
}