//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//set<int> visited;
//set<int> input[2000000];
//set<int> input_reverse[2000000];
//void dfs(int x){
//    int t = visited.size();
//    visited.insert(x);
//    if (t == (int)visited.size()) return;
//    for (auto &itr : input[x]){
//        dfs(itr);
//        visited.insert(itr);
//    }
//}
//
//void dfs_reverse(int x){
//    int t = visited.size();
//    visited.insert(x);
//    if (t == (int)visited.size()) return;
//    for (auto &itr : input_reverse[x]){
//        dfs_reverse(itr);
//        visited.insert(itr);
//    }
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int cities, length, a, b;
//    cin >> cities >> length;
//    for (int i = 0; i < length; i++){
//        cin >> a >> b;
//        a--;
//        b--;
//        input[a].insert(b);
//        input_reverse[b].insert(a);
//    }
//
//    dfs(0);
//    if (visited.size() != cities){
//        cout << "NO\n";
//        cout << 1 << " ";
//        int index = 0;
//        for (auto itr : visited){
//            if (index != itr){
//                cout << index + 1;
//                return 0;
//            }
//            index++;
//        }
//        cout << index + 1;
//        return 0;
//    }
//
//    visited.clear();
//    dfs_reverse(0);
//    if (visited.size() != cities){
//        cout << "NO\n";
//        int index = 0;
//        for (auto itr : visited){
//            if (index != itr){
//                cout << index + 1 << " " << 1;
//                return 0;
//            }
//            index++;
//        }
//        cout << index + 1 << " " << 1;
//        return 0;
//    }
//    cout << "YES";
//}
