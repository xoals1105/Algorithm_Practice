#include <bits/stdc++.h>
using namespace std;

int n, m;
string mero[100];
int dist[100][100];
int dx[] {1, 0, -1, 0};
int dy[] {0, -1, 0 ,1};

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    dist[x][y] = 1;
    q.push({x, y});

    while(!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = dx[i] + current.first;
            int ny = dy[i] + current.second;

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            if(dist[nx][ny] >= 0 || mero[nx][ny] == '0') continue;

            dist[nx][ny] = dist[current.first][current.second] + 1;
            q.push({nx, ny});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        cin >> mero[i];
    }

    for(int i = 0; i < n; i++) {
        fill(dist[i], dist[i]+m, -1);
    }

    bfs(0, 0);
    cout << dist[n-1][m-1];

    return 0;
}