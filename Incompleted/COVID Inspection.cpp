#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int length, a, b;
    cin >> length;
    map<int, int> map;
    for (int i = 0; i < length; i++){
        cin >> a >> b;
        map[a]++;
        map[b]--;
    }
    int sum = 0;
    int output = 0;
    for (auto itr : map){
        sum += itr.second;
        output = max(sum, output);
    }
    cout << output;
}