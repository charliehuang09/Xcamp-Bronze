//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//struct cow{
//    int milk;
//    string name;
//};
//int main(){
//    map<string, int> m;
//    int length;
//    cin >> length;
//    string t1;
//    int t2;
//    vector<string> names;
//    for (int i = 0; i < length; i++){
//        cin >> t1 >> t2;
//        if (m[t1] == 0){
//            names.push_back(t1);
//        }
//        m[t1] += t2;
//    }
//    cow arr[names.size()];
//    for (int i = 0; i < names.size(); i++){
//        arr[i].name = names[i];
//        arr[i].milk = m[names[i]];
//    }
//    for (int i = 0; i < names.size(); i++){
//        for (int i = 0; i < names.size() - 1; i++){
//            if (arr[i].milk > arr[i + 1].milk){
//                swap(arr[i], arr[i + 1]);
//            }
//        }
//    }
//    if (names.size() == 1){
//        cout << arr[0].name;
//        return 0;
//    }
//    cout << "\n";
//    int prev = arr[0].milk;
//    for (int i = 0; i < names.size(); i++){
//        if (arr[i].milk != prev){
//            cout << arr[i].name;
//            return 0;
//        }
//    }
//    cout << "Tie";
//
//
//
//}