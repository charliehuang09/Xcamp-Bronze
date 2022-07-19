//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    int board[3] = {0,1, 2};
//    int score[3] = {0,0,0};
//    int a, b, c;
//    for (int i = 0; i < length; i++){
//        cin >> a >> b >> c;
//        a--;
//        b--;
//        c--;
//        swap(board[a], board[b]);
//        score[board[c]]++;
//    }
//
//    cout << max(score[0], max(score[1], score[2]));
//    return 0;
//}