#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string first_num;
    string second_num;

    cin >> first_num >> second_num;

    reverse(first_num.begin(), first_num.end());
    reverse(second_num.begin(), second_num.end());

    cout << (first_num > second_num ? first_num : second_num);
    return 0;
}