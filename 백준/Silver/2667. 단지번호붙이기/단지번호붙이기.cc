#include <bits/stdc++.h>
using namespace std;

int dx[] {1, 0, -1, 0};
int dy[] {0, 1, 0, -1};
bool visited[25][25];
string arr[25];
vector<int> v;
int n;

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1;
    int count = 1;

    while(!q.empty()) {
        pair<int,int> current = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = dx[i] + current.first;
            int ny = dy[i] + current.second;

            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if(visited[nx][ny] || arr[nx][ny] == '0') continue;

            visited[nx][ny] = 1;
            q.push({nx, ny});
            count++ ;
        }
    }

    return count;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) {
            cin >> arr[i];
    }

   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int count = 0;
            if(!visited[i][j] && arr[i][j] == '1') {
                count = bfs(i, j);
                v.push_back(count);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    for(int vv : v) {
        cout << vv << "\n";
    }
    return 0;
}
