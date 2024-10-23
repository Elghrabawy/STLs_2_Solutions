#include <bits/stdc++.h>
using namespace std;

 
void IO(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin) , freopen("../output.txt", "w", stdout);
    #endif
}

#define all(x) x.begin(), x.end()
#define ll long long

int main() {
    IO();
    
    int n; cin >> n;
    map<string, string> new_of;
    map<string, string> old_of;

    for(int i = 0; i < n; i++){
        string a, b; cin >> a >> b;

        
        if(old_of.count(a)){
            new_of[old_of[a]] = b;
            old_of[b] = old_of[a];
        }
        else{   
            new_of[a] = b;
            old_of[b] = a;
        }
    }

    cout << new_of.size() << endl;
    for(auto &[old, _new] : new_of ){
        cout << old << "  " << _new << endl;
    }
}