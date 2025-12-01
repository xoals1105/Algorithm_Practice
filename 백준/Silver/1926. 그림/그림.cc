#include <bits/stdc++.h>
using namespace std;

int dx[] {1, 0, -1, 0};
int dy[] {0, -1, 0, 1};
int board[500][500];
bool visited[500][500];

int n, m;

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    visited[x][y] = 1;
    q.push({x, y});
    int area = 0;

    while(!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        area++;

        for(int i = 0 ; i < 4; i++) {
            int nx = dx[i] + current.first;
            int ny = dy[i] + current.second;

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(visited[nx][ny] || board[nx][ny] != 1) continue;

            visited[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
    return area;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int count = 0;
    int maxArea = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(board[i][j] == 1 && !visited[i][j]) {
                count++;
                int currentArea = bfs(i, j);
                maxArea = max(maxArea, currentArea);
            }
        }
    }

    cout << count << '\n' << maxArea;
    return 0;
}