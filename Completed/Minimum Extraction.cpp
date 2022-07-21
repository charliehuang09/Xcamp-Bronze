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
//    int length, t;
//    cin >> length;
//    vector<int> input;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        input.push_back(t);
//    }
//
//    sort(input.begin(), input.end());
//
//    int output = -2147483647;
//    int sum = 0;
//    int index = 0;
//    while(index < input.size()){
//        int minElementIndex = 0;
//        int min = input[index];
//        min += sum;
//        sum -= min;
//        output = max(min, output);
//        index++;
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