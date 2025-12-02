#include <bits/stdc++.h>
using namespace std;


int n, m;


int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<int> nVt;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        nVt.push_back(num);
    }
    sort(nVt.begin(), nVt.end());

    cin >> m;
    
    for(int i = 0; i < m; i++) {
        int num = 0;
        cin >> num;
        
        int count = upper_bound(nVt.begin(), nVt.end(), num) 
                    - lower_bound(nVt.begin(), nVt.end(), num);
        
        cout << count << " ";
    }



    
    return 0;
}