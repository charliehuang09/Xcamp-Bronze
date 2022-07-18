//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int main(){
//    string guess[3];
//    string answer[3];
//    int green = 0;
//    int yellow = 0;
//    map<char, int> map;
//    for (int i = 0; i < 3; i++){
//        cin >> guess[i];
//        for (int j = 0; j < 3; j++){
//            map[guess[i][j]]++;
//        }
//    }
//
//    for (int i = 0; i < 3; i++){
//        cin >> answer[i];
//        for (int j = 0; j < 3; j++){
//            if (answer[i][j] == guess[i][j]){
//                map[answer[i][j]]--;
//                answer[i][j] = 'x';
//                green++;
//            }
//        }
//    }
//
//    for (int i = 0; i < 3; i++){
//        for (int j = 0; j < 3; j++){
//            if (answer[i][j] != 'x'){
//                if (map[answer[i][j]] > 0){
//                    yellow++;
//                    map[answer[i][j]]--;
//                }
//            }
//        }
//    }
//
//    cout << green << "\n" << yellow;
//
//    return 0;
//}