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

    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        vector<int> a(n); for(auto &x : a) cin >> x;

        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < m; i++){
            pq.push(a[i]);
        }
        for(int i = 1; i < min(k, n - m + 1); i++){
            pq.pop();
            pq.push(a[m + i - 1]);
        }

        for(int i = n - m; i < k - 1; i++){
            pq.pop();
        }
        cout << pq.top() << endl;
    }
}