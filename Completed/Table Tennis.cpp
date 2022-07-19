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
//    long long int length, k, t;
//    cin >> length >> k >> t;
//    long long int maximum = t;
//    int king = t;
//    long long int streak = 0;
//    for (int i = 1; i < length; i++){
//        cin >> t;
//        maximum = max(maximum, t);
//        if (king > t){
//            streak++;
//            if (streak == k){
//                cout << king;
//                return 0;
//            }
//        }
//        else{
//            streak = 1;
//            king = t;
//        }
//    }
//    cout << maximum;
//}