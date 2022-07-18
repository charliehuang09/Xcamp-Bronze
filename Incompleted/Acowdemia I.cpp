//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int length, most;
//bool ok(int target, int input[]){
//    int l = most, req = 0;
//    for (int i = 0; i < length; i++){
//        if (input[i] >= target){
//            req++;
//        }
//        if (input[i] + 1 == target && l > 0){
//            req++;
//            l--;
//        }
//    }
//    if (req >= target){
//        return true;
//    }
//    return false;
//}
//int main(){
//    cin >> length >> most;
//    int input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//    sort(input, input + length);
//
//    for (int i = length - 1; i >= 0; i--){
//        if (ok(input[i] + 1, input)){
//            cout << input[i] + 1;
//            return 0;
//        }
//    }
//    for (int i = length - 1; i >= 0; i--){
//        if (ok(input[i], input)){
//            cout << input[i];
//            return 0;
//        }
//    }
//
//}