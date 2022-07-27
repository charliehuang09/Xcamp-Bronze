//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//struct input_{
//    int index;
//    int value;
//};
//
//bool compare(input_ a, input_ b){
//    return  a.value < b.value;
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, target;
//    cin >> length >> target;
//    input_ input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i].value;
//        input[i].index = i + 1;
//    }
//    sort(input, input + length, compare);
//    int l;
//    int r;
//    for (int i = 0; i < length - 2; i++){
//        l = i + 1;
//        r = length - 1;
//        while(l != r){
//            if (input[i].value + input[l].value + input[r].value == target){
//                cout << input[i].index << " " << input[l].index << " " << input[r].index;
//                return 0;
//            }
//            if (input[i].value + input[l].value + input[r].value < target){
//                l++;
//            }
//            else{
//                r--;
//            }
//        }
//    }
//    cout << "IMPOSSIBLE";
//}
///*
//4 8
//2 7 5 1
//
//1 2 5 7
// */