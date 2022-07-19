//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//void solve(){
//    int length, x;
//    cin >> length >> x;
//    int even = 0;
//    int odd = 0;
//    int t;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        if (t % 2 == 0){
//            even++;
//        }
//        else{
//            odd++;
//        }
//    }
//    if (odd == 0){
//        cout << "No\n";
//        return;
//    }
//
//    if (even + odd < x){
//        cout << "No\n";
//        return;
//    }
//
//    if (even >= 1){
//        if (odd % 2 == 0){
//            odd--;
//        }
//        if (odd + even >= x){
//            cout << "Yes\n";
//            return;
//        }
//        else{
//            cout << "No\n";
//            return;
//        }
//    }
//    else{
//        if (odd >= x && x % 2 == 1){
//            cout << "Yes\n";
//            return;
//        }
//    }
//    cout << "No\n";
//    return;
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    for (int i = 0;i < length; i++){
//        solve();
//    }
//}