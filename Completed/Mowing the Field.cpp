//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//struct move_{
//    char direction;
//    int length;
//};
//int dx[4] = {-1,1,0,0};
//int dy[4] = {0,0,-1,1};
//map<char, int> key;
//int board[2000][2000];
//void print(){
//    for (int i = 980; i < 1020; i++){
//        for (int j = 980; j < 1020; j++){
//            cout << board[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n\n";
//}
//int main(){
//    key['N'] = 0;
//    key['S'] = 1;
//    key['W'] = 2;
//    key['E'] = 3;
//    int length;
//    cin >> length;
//    move_ input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i].direction;
//        cin >> input[i].length;
//    }
//    int ans = 23142214;
//    int x = 1000, y = 1000;
//    int current = 1;//time --!
//    board[x][y] = 1;
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j < input[i].length; j++){
//            if (board[x + dx[key[input[i].direction]]][y + dy[key[input[i].direction]]] != 0){
//                if (current - board[x + dx[key[input[i].direction]]][y + dy[key[input[i].direction]]] < ans){
//                    ans = current - board[x + dx[key[input[i].direction]]][y + dy[key[input[i].direction]]];
//                }
//                current++;
//                board[x + dx[key[input[i].direction]]][y + dy[key[input[i].direction]]] = current;
//                x = x + dx[key[input[i].direction]];
//                y = y + dy[key[input[i].direction]];
//
//            }
//            else{
//                current++;
//                board[x + dx[key[input[i].direction]]][y + dy[key[input[i].direction]]] = current;
//                x = x + dx[key[input[i].direction]];
//                y = y + dy[key[input[i].direction]];
//            }
//        }
//    }
//    //print();
//    if (ans == 23142214){
//        cout << -1;
//        return 0;
//    }
//    cout << ans + 1;
//}
//
