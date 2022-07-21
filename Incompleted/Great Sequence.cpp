//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void solve(){
//    long long int length, k, t;
//    cin >> length >> k;
//    map<long long int, long long int> map;
//    vector<int> input;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        input.push_back(t);
//    }
//
//    sort(input.begin(), input.end(), greater<long long int>());
//
//    long long int output = 0;
//    for (long long int i = 0; i < length; i++){
//        if (map[input[i] * k] >= 1){
//            map[input[i] * k]--;
//            output--;
//        }
//        else{
//            map[input[i]]++;
//            output++;
//        }
//    }
//    cout << output << "\n";
//    return;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        solve();
//    }
//}