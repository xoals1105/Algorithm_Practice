#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
bool visited[1001];

void bfs(int k) {
    queue<int> q;
    q.push(k);
    visited[k] = 1;

    while(!q.empty()) {
        int current = q.front();
        q.pop();

        for(int vv : v[current]) {
            if(!visited[vv]) {
                visited[vv] = 1;
                q.push(vv);
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int n = 0, m = 0;
    cin >> n >> m;

    for(int i = 0; i <= n; i++) {
        v.push_back(vector<int>());
    }

    for(int i = 0; i < m; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        v[num1].push_back(num2);
        v[num2].push_back(num1);
    }

    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]){
            bfs(i);
            count++;
        }
    }

    cout << count;

    return 0;
}
