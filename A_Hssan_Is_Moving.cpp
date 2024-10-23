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

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &el : a) cin >> el;
    for(auto &el : b) cin >> el;

    multiset<int> items(all(a));
    multiset<int, greater<int>> cars(all(b));

    int ans = 0;
    while(!items.empty()){
        ans++;
        for(auto &car : cars){
            auto it = items.upper_bound(car);
            if(items.empty() || it == items.begin()) break;
            else{
                --it;
                items.erase(it);
            }
        }
        if(!items.empty()) ans++;
    }
    cout << ans << endl;
}