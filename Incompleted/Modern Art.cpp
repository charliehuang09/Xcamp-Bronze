//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int p[10][10];
//bool ok[9];
//int n;
//int dx[4] = {0,0,-1,1};
//int dy[4] = {1,-1,0,0};
//bool inbound(int x, int y){
//    if (y < 0){
//        return false;
//    }
//    if (x < 0){
//        return false;
//    }
//    if (y >= n){
//        return false;
//    }
//    if (x >= n){
//        return false;
//    }
//    return true;
//}
//bool check(int self, int x, int y){
//    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
//    for (int i = 0; i < 4; i++){
//        if (inbound(x + dx[i],y + dy[i]))
//            arr[p[x + dx[i]][y + dy[i]]]++;
//    }
//    arr[self] = 0;
//    arr[0] = 0;
//    cout << self << "    ";
//    for (int i = 0; i < 10; i++){
//        cout << arr[i] << " ";
//    }
//    cout << "\n\n";
//    sort(arr, arr + 9);
//    if (arr[8] >= 2){
//        return false;
//    }
//    return true;
//}
//int main(){
//    cin >> n;
//    for (int i = 0; i < n; i++){
//        string s;
//        cin >> s;
//        for (int j = 0; j < n; j++){
//            p[i][j] = s[j] - '0';
//        }
//    }
//    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++){
//            if (p[i][j] != 0){
//                if (check(p[i][j], i, j) == false){
//                    arr[p[i][j]] = -1;
//                }
//                else{
//                    if (arr[p[i][j]] != -1)
//                        arr[p[i][j]] = 2;
//                }
//            }
//        }
//    }
//    int ans = 0;
//    for (int i = 1; i <= 9; i++){
//    }
//    for (int i = 0; i < 10; i++){
//        cout << arr[i] << " ";
//        if (arr[i] == 2){
//            ans++;
//        }
//    }
//    cout << "\n" << ans;
//}