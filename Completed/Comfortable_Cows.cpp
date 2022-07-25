//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int board[1005][1005];
//
//void printboard(){
//    for (int i = 0; i < 10; i++){
//        for (int j = 0; j < 10; j++){
//            cout << board[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//bool is_comfortable(int x, int y){
//    int count = 0;
//    if (board[x][y] == 0){
//        return false;
//    }
//    if (board[x + 1][y] == 1 || board[x + 1][y] == 2){
//        count++;
//    }
//    if (board[x][y + 1] == 1 || board[x][y + 1] == 2){
//        count++;
//    }
//    if (board[x - 1][y] == 1 || board[x - 1][y] == 2){
//        count++;
//    }
//    if (board[x][y - 1] == 1 || board[x][y - 1] == 2){
//        count++;
//    }
//    if (count == 3){
//        return true;
//    }
//    return false;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, x, y;
//    cin >> length;
//    int ccows = 0;
//    for (int i = 0; i < length; i++){
//        cin >> x >> y;
//        x++;
//        y++;
//        board[x][y] = 1;
//        if (is_comfortable(x + 1, y)){
//            if (board[x + 1][y] == 1){
//                board[x + 1][y] = 2;
//                ccows++;
//            }
//        }
//        else{
//            if (board[x + 1][y] == 2){
//                board[x + 1][y] = 1;
//                ccows--;
//            }
//        }
//        if (is_comfortable(x - 1, y)){
//            if (board[x - 1][y] == 1){
//                board[x - 1][y] = 2;
//                ccows++;
//            }
//        }
//        else{
//            if (board[x - 1][y] == 2){
//                board[x - 1][y] = 1;
//                ccows--;
//            }
//        }
//        if (is_comfortable(x, y + 1)){
//            if (board[x][y + 1] == 1){
//                board[x][y + 1] = 2;
//                ccows++;
//            }
//        }
//        else{
//            if (board[x][y + 1] == 2){
//                board[x][y + 1] = 1;
//                ccows--;
//            }
//        }
//        if (is_comfortable(x, y - 1)){
//            if (board[x][y - 1] == 1){
//                board[x][y - 1] = 2;
//                ccows++;
//            }
//        }
//        else{
//            if (board[x][y - 1] == 2){
//                board[x][y - 1] = 1;
//                ccows--;
//            }
//        }
//        if (is_comfortable(x, y)){
//            if (board[x][y] == 1){
//                board[x][y] = 2;
//                ccows++;
//            }
//        }
//        else{
//            if (board[x][y] == 2){
//                board[x][y] = 1;
//                ccows--;
//            }
//        }
//        cout << ccows << "\n";
//    }
////    cout << ccows << "\n";
////    printboard();
//}