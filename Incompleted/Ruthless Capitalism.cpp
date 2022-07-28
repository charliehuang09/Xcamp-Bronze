//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    int lines;
//    cin >> lines;
//    int limit;
//    cin >> limit;
//    string input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//
//    int l = 0;
//    int r = 0;
//    int sum = input[0].size();
//    string output[length];
//    for (int i = 0; i < length; i++){
//        output[i] = "";
//    }
//    while(r < length){
//        if (sum < limit){
//            r++;
//            sum += input[r].size() + 1;
//        }
//        else{
//            sum -= input[l].size() + 1;
//            l++;
//        }
//        for (int i = l; i < r; i++){
//            cout << input[i] << " ";
//        }
//        cout << "\n";
//    }
//}