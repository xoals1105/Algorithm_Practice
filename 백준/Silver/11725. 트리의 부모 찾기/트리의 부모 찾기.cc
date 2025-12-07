#include <bits/stdc++.h>
using namespace std;
//193

vector<vector<int>> v(100001);
vector<int> nv(100001);
bool visited[100001];

void bfs(int num) {
    queue<int> q;
    q.push(num);
    visited[num] = 1;

    while(!q.empty()) {
        int current = q.front();
        q.pop();


        for(int vv : v[current]) {
            if (!visited[vv]) {
                q.push(vv);
                visited[vv] = 1;
                nv[vv] = current;
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        v[num1].push_back(num2);
        v[num2].push_back(num1);
    }

 
    bfs(1);

    for(int i = 2; i <= n; i++) cout << nv[i] << "\n";
   

    return 0;
}