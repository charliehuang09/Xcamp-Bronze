//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int input[10000][10000];
//int n, m;
//const int dx[8] = {-1, 1, 0, 0, 1, 1, -1, -1};
//const int dy[8] = {0,0, 1,-1, -1, 1, -1, 1};
//
//int output = 0;
//int current = 0;
//
//bool inbound(int x, int y){
//    if (x >= n){
//        return false;
//    }
//    if (y >= m){
//        return false;
//    }
//    if (x < 0){
//        return false;
//    }
//    if (y < 0){
//        return false;
//    }
//    return true;
//}
//
//void dfs(int x, int y){
//    input[x][y] = 0;
//    current++;
//    for (int i = 0; i < 8; i++){
//        if (inbound(x + dx[i], y + dy[i])){
//            if (input[x + dx[i]][y + dy[i]] == 1){
//                dfs(x + dx[i], y + dy[i]);
//            }
//        }
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> n >> m;
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            cin >> input[i][j];
//        }
//    }
//
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            if (input[i][j] == 1){
//                dfs(i, j);
//                output = max(output, current);
//                current = 0;
//            }
//        }
//    }
//    cout << output;
//}