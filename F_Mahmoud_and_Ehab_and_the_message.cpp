#include <bits/stdc++.h>
using namespace std;

 
void IO(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin) , freopen("../output.txt", "w", stdout);
    #endif
}

#define all(x) x.begin(), x.end()

int main() {
    IO();

    int n, k, m; cin >> n >> k >> m;
    vector<string> words(n); for(auto &x : words) cin >> x;
    vector<int> cost(n); for(auto &x : cost) cin >> x;

    map<string, int> word_group;
    vector<int> group_cost(k, INT_MAX);
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        for(int j = 0; j < x; j++){
            int idx; cin >> idx; --idx;
            group_cost[i] = min(group_cost[i], cost[idx]);
            word_group[words[idx]] = i;
        }
    }

    long long ans = 0;
    for(int i = 0; i < m; i++){
        string w; cin >> w;
        ans += group_cost[word_group[w]];
    }

    cout << ans << endl;
}