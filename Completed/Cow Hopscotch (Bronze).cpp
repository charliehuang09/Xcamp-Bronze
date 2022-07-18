//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int ans = 0;
//int col,row;
//void dfs(int x, int y,string board[]){
//    if (x == col - 1 && y == row - 1){
//        ans++;
//        return;
//    }
//    char self = board[x][y];
//    for (int i = x + 1; i < col; i++){
//        for (int j = y + 1; j < row; j++){
//            if (self != board[i][j]){
//                dfs(i,j,board);
//            }
//        }
//    }
//    return;
//}
//int main(){
//    cin >> col >> row;
//    string input[col];
//    for (int i = 0; i < col; i++){
//        cin >> input[i];
//    }
//    dfs(0,0,input);
//    cout << ans;
//    return 0;
//
//
//}