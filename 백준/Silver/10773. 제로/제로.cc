#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n = 0;
    int num = 0;
    cin >> n;
    stack<int> s;

    for(int i = 0 ; i < n; i++) {
        cin >> num;
        if(num == 0) {
            s.pop();
        }
        else {
            s.push(num);
        }
    }

    int answer = 0;
    while(!s.empty()) {
        answer += s.top();
        s.pop();
    }

    cout << answer;

    return 0;
}