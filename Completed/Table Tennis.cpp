#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int length, k, t;
    cin >> length >> k;
    queue<int> q;
    for (int i = 0; i < length; i++){
        cin >> t;
        q.push(t);
    }
//    int i = 0;
    int streak = 0;
    int current_player = -1;
    while (true){
//        i++;
//        cout << i << "\n";
        int challenger = q.front();
        if (current_player > challenger){
            streak++;
            q.pop();
            q.push(challenger);
            if (streak == k){
                cout << current_player;
                return 0;
            }
        }
        else{
            streak = 1;
            current_player = challenger;
            q.pop();
            q.push(challenger);
        }
    }
}