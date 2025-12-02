//193
#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
bool visited[9];

void dfs(int k) {
    
    if(k == m) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }


    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            arr[k] = i;
            visited[i] = 1;
            dfs(k + 1);
            visited[i] = 0;
        }
    }

}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    dfs(0);

    return 0;
}   