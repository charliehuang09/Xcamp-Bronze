#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

set<string> s;

void dfs(string input, int k){
    if (k == 0){
        s.insert(input);
        return;
    }
    string t = input;
    reverse(input.begin(), input.end());
    dfs(input + t, k - 1);
    dfs(t + input, k - 1);
}

void solve(){
    int length, k;
    string input;
    cin >> length >> k;
    cin >> input;
    s.clear();
    dfs(input, k);
    cout << s.size() << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int length;
    cin >> length;
    for (int i = 0; i < length; i++){
        solve();
    }

}