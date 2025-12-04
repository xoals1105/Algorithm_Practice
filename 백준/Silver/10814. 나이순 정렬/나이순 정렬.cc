#include <bits/stdc++.h>
using namespace std;
//193

struct Edge {
    int age;
    string name;
    int idx;
};

bool compare(Edge a, Edge b) {
    if(a.age == b.age) {
        return a.idx < b.idx;
    }

    return a.age < b.age;
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n = 0;
    cin >> n;
    vector<Edge> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].age >> v[i].name;
        v[i].idx = i;
    }

    sort(v.begin(), v.end(), compare);

    for(auto & a : v) {
        cout << a.age << " " << a.name << "\n";
    }
    return 0;
}