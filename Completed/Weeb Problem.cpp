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
//    string input;
//    cin >> input;
//    cin >> input;
//    int length;
//    cin >> length;
//    int a;
//    char b;
//    for (int i = 0; i < length; i++){
//        cin >> a >> b;
//        int l = 0;
//        int r = 0;
//        int needed = 0;
//        if (input[0] != b){
//            needed++;
//        }
//        int output = -1;
//        while(r <= input.size()){
//            if (needed <= a){
//                output = max(output, r - l + 1);
//            }
////            cout << needed << "   " << l << " " << r << "\n";
//            if (needed > a){
//                if (input[l] != b){
//                    needed--;
//                }
//                l++;
//            }
//            else{
//                r++;
//                if (input[r] != b){
//                    needed++;
//                }
//            }
//        }
//        if (output > input.size()){
//            cout << input.size() << "\n";
//        }
//        else{
//            cout << output << "\n";
//        }
//    }
//}
///*
//6
//aiyimi
//1
//2 i
// */
