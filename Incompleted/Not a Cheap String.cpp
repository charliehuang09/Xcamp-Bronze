//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//struct sorted_{
//    int index;
//    int value;
//};
//
//bool compare(sorted_ x, sorted_ y){
//    return x.value > y.value;
//}
//
//void solve(){
//    string input;
//    int target, t;
//    cin >> input >> target;
//    vector<int> key;
//    int current = 0;
//    for (int i = 0; i < input.size(); i++){
//        t = input[i];
//        t -= 96;
//        current += t;
//        key.push_back(t);
//    }
//
//    vector<sorted_> sorted;
//    sorted_ temp;
//    for (int i = 0; i < key.size(); i++){
//        temp.index = i;
//        temp.value = key[i];
//        sorted.push_back(temp);
//    }
//
//    sort(sorted.begin(), sorted.end(), compare);
//
//    while(current > target){
//        key[sorted[0].index] = -1;
//        current -= sorted[0].value;
//        sorted.erase(sorted.begin());
//    }
//
//    for (int i = 0; i < key.size(); i++){
//        if (key[i] != -1){
//            cout << char(key[i] + 96);
//        }
//    }
//    cout << "\n";
//
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