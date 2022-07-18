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
//    int length;
//    cin >> length;
//    vector<int> books;
//    map<int, int> map;
//    int t;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        books.push_back(t);
//        map[t] = i;
//    }
//
//    int input;
//    int index = -1;
//    for (int i = 0; i < length; i++){
//        cin >> input;
//        if (index <= map[input]){
//            cout << map[input] - index << " ";
//            index = map[input];
//        }
//        else{
//            cout << "0 ";
//        }
//    }
//
//}