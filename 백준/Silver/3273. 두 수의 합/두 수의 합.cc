#include <bits/stdc++.h>
using namespace std;

vector<int> v(100005);

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> x;

    sort(v.begin(), v.begin() + n);
    int start = 0;
    int end = n - 1;
    int count = 0;

    while(start < end) {
        int num = v[start] + v[end];

        if(num == x) {
            count++;
            start++;
            end--;
        }
        else if(num < x) {
            start++;
        }
        else {
            end--;
        }
    }

    cout << count;

    return 0;
}
