#include <bits/stdc++.h>
using namespace std;

struct K {
    int num, index;
};

bool cmp(K a, K b) {
    return a.index < b.index;
}

int main() {
    int t;
    cin >> t;
    for (int csds = 0; csds < t; csds++) {
        int n;
        cin >> n;
        unordered_map<int, K> mp;
        int realIndex = 1;
        for (int i = 1; i <= n; i++) {
            int k;
            cin >> k;
            if (mp.find(k) == mp.end()) {
                mp[k] = {k, realIndex};
                realIndex++;
            }
        }
        K kmp[50005];
        int kmpi = 0;
        for (auto it: mp) {
            kmp[kmpi] = {it.second.num, it.second.index};
            kmpi++;
        }
        sort(kmp, kmp + kmpi, cmp);
        for (int i = 0; i < kmpi; i++) {
            if (i == 0) cout << kmp[i].num;
            else cout << " " << kmp[i].num;
        }
        cout << endl;
    }
    return 0;
}
