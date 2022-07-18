//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//struct route{
//    int cost;
//    int flightnum;
//    vector<int> dest;
//};
//
//bool ok(int start, int end, vector<int> arr){
//    int t = arr.size() + 1;
//    for (int i = 0; i < arr.size(); i++){
//        if (start == arr[i]){
//            t = i;
//            break;
//        }
//    }
//    for (int i = t; i < arr.size(); i++){
//        if (end == arr[i]){
//            return true;
//        }
//    }
//    return false;
//}
//int main(){
//    int start, end, length, t;
//    cin >> start >> end >> length;
//    route input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i].cost;
//        cin >> input[i].flightnum;
//        for (int j = 0; j < input[i].flightnum; j++){
//            cin >> t;
//            input[i].dest.push_back(t);
//        }
//    }
//    int ans = 1000000;
//    for (int i = 0; i < length; i++){
//        if (ok(start, end, input[i].dest)){
//            if (input[i].cost < ans){
//                ans = input[i].cost;
//            }
//        }
//    }
//    if (ans == 1000000){
//        cout << "-1";
//        return 0;
//    }
//    cout << ans << "\n";
//
//}