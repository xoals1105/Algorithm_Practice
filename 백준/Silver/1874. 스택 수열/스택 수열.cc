#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    stack<int> st;
    vector<char> ops; // +, - 연산 기록용

    int cur = 0; // 지금까지 push한 가장 큰 숫자

    for(int i = 0; i < n; i++) {
        int x = 0;
        cin >> x;

        if(cur < x) {
            for(int j = cur + 1; j <= x; j++) {
                st.push(j);
                ops.push_back('+');
            }
            cur = x;
        }

        if(!st.empty() && st.top() == x) {
            st.pop();
            ops.push_back('-');
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }

    for(char o : ops) {
        cout << o << "\n";
    }
    return 0;
}