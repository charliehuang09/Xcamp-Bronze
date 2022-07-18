//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void solve(string a, string b){
//    int index = 0;
//    for (int i = 0; i < b.size(); i++){
//        if (a[index + 1] == b[i]){
//            index++;
//            continue;
//        }
//        if (a[index] == b[i]){
//            continue;
//        }
//        cout << "NO\n";
//        return;
//    }
////    cout << index << " " << a.size() << " ";
//    if (index == a.size() - 1){
//        cout << "YES\n";
//        return;
//    }
//    cout << "NO\n";
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//
//    string a, b, c;
//    for (int i = 0; i < length; i++){
//        a = " ";
//        cin >> c >> b;
//        solve(a + c, b);
//    }
//}