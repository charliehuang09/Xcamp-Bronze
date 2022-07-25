//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//const int length = 7;
//
//bool solve(long long int  a, long long int  b, long long int  c, long long int  ab, long long int  bc, long long int  ca, long long int  abc){
//    if (a + b != ab){
//        return false;
//    }
//    if (b + c != bc){
//        return false;
//    }
//    if (c + a != ca){
//        return false;
//    }
//    if (a + b + c != abc){
//        return false;
//    }
//    if (a <= b <= c){
//        cout << a << " " << b << " " << c << "\n";
//    }
//    exit(0);
//}
//
//void permute(long long int input[7], int l, int r){
//    if (l == r){
////        for (int i = 0; i < length; i++){
////            cout << input[i] << " ";
////        }
////        cout << "\n";
//        solve(input[0], input[1], input[2], input[3], input[4], input[5], input[6]);
//        return;
//    }
//    else{
//        for (int i = l; i <= r; i++){
//            swap(input[l], input[i]);
//            permute(input, l + 1, r);
//            swap(input[l], input[i]);
//        }
//    }
//}
//
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    long long int input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//    sort(input, input + length);
//
//    permute(input, 0, 6);
//
//}
////
////1 1 1000 1001 1001 2 1002