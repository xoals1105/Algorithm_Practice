#include <bits/stdc++.h>
using namespace std;
//193

int n;
vector<int> v;   // 원본 좌표 저장
vector<int> cv;  // 정렬하고 중복 제거할 좌표들 (Compressed Vector)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        v.push_back(num);
        cv.push_back(num);
    }

    sort(cv.begin(), cv.end());
    cv.erase(unique(cv.begin(), cv.end()), cv.end());

    for(int i = 0; i < n; i++) {
        cout << lower_bound(cv.begin(), cv.end(), v[i]) - cv.begin() << " ";
    }

    return 0;
}