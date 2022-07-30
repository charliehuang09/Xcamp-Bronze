//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int testcases;
//    cin >> testcases;
//    for (int a = 0; a < testcases; a++){
//        int n, m;
//        cin >> n >> m;
//        char input[n][m];
//        for (int i = 0; i < n; i++){
//            for (int j = 0; j < m; j++){
//                cin >> input[i][j];
//            }
//        }
//
//        for (int i = 0; i < n; i++){
//            for (int j = 0; j < m; j++){
//                if (input[i][j] == '*'){
//                    int pos = i - 1;
//                    while(pos >= 0){
//                        if (input[pos][j] == '.'){
//                            pos--;
//                        }
//                        else{
//                            break;
//                        }
//                    }
//                    swap(input[i][j], input[pos][j]);
//                }
//            }
//        }
//        for (int i = 0; i < n; i++){
//            for (int j = 0; j < m; j++){
//                cout << input[i][j];
//            }
//            cout << "\n";
//        }
//        cout << "\n";
//    }
//}