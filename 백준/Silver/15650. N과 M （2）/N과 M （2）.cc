#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];

// k: 현재 개수, st: 시작할 숫자 번호
void dfs(int k, int st) {
    
    if(k == m) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = st; i <= n; i++) {
        arr[k] = i;
        dfs(k + 1, i + 1);
    }
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    
    // 처음엔 0개를 뽑았고, 숫자 1부터 탐색 시작
    dfs(0, 1); 
    
    return 0;
}