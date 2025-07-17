//https://codeforces.com/contest/2126/problem/B
#include <bits/stdc++.h>

using namespace std;

int maxHikes(int n, int k, const vector<int>& a) {
    int hikes = 0;
    int i = 0;
    
    while (i <= n - k) {
        bool validHike = true;
        for (int j = 0; j < k; ++j) {
            if (a[i + j] == 1) {
                validHike = false;
                break;
            }
        }
        if (validHike) {
            hikes++;
            i += k + 1; 
        } else {
            i++;
        }
    }
    return hikes;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << maxHikes(n, k, a) << endl;
    }
    return 0;
}
