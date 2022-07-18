//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int cow[1000100];
//int main(){
//    int length,t1,t2;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        cin >> t1 >> t2;
//        cow[t1] = t2 + 1;
//    }
//    int prevsafe = -1233232123;
//    int previnfected = -1221321312;
//    int r = INT_MAX;
//    for (int i = 0; i < 1000100; i++){
//        if (cow[i] == 1){
//            if (i - previnfected < r){
//                r = i - previnfected;
//            }
//            prevsafe = i;
//        }
//        if (cow[i] == 2){
//            if (i - prevsafe < r){
//                r = i - prevsafe;
//            }
//            previnfected = i;
//        }
//    }
//    r--;
//    //cout << r << " ";
//    int ans = 0;
//    for (int i = 0; i < 1000100; i++){
//        if (cow[i] == 2){//onfected
//            ans++;
//            for (int j = 0; j < r; j++){
//                i++;
//                if (cow[i] == 2){
//                    j = -1;
//                }
//            }
//        }
//    }
//    cout << "\n\n";
//    cout << ans;
//}
