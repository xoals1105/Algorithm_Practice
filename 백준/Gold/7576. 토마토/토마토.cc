#include <bits/stdc++.h>
using namespace std;

int n, m;
int tomato[1000][1000];
int dist[1000][1000];
int dx[] {1, 0, -1, 0};
int dy[] {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs() {
    while(!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = dx[i] + current.first;
            int ny = dy[i] + current.second;

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(dist[nx][ny] >= 0) continue;

            dist[nx][ny] = dist[current.first][current.second] + 1;
            q.push({nx, ny});
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> tomato[i][j];

            if(tomato[i][j] == 1) {
                q.push({i, j});
                dist[i][j] = 0;
            }
            else if(tomato[i][j] == 0) {
                dist[i][j] = -1;
            }
        }
    }

    bfs();

    int answer = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(dist[i][j] == -1) {
            cout << -1;
            return 0;
            }
            answer = max(dist[i][j], answer);
        }
    }

    cout << answer;

    return 0;
}   