//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int main(){
////    ios_base::sync_with_stdio(0);
////    cin.tie(0);
//
//    int length, max;
//    cin >> length >> max;
//    int input[length + 2];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//
//    input[length] = -1;
//    input[length + 1] = 2147483647;
//    sort(input, input + length + 1);
//    int l = length / 2;
//    int r = length / 2;
//    while(abs(input[l] - input[r]) <= max && l >= 1 && r < length){
//        if (abs(input[l - 1] - input[r]) < abs(input[l] - input[r + 1])){
//            l--;
//        }
//        else{
//            r++;
//        }
//    }
//
//    cout << r - l;
//    return 0;
//}
////1 6 8 9 25
////
////5 1923
////25 9 1 6 8