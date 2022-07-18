//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
////harcode one case
//using namespace std;
//int evenans = 0;
//int oddans = 0;
//int evennum = 0;
//int oddnum = 0;
//bool evencheck(){
//    if (evennum >= 1){
//        evenans++;
//        evennum--;
//        return true;
//    }
//    if (oddnum >= 2){
//        oddnum -=2;
//        evenans++;
//        return true;
//    }
//    return false;
//}
//
//bool oddcheck(){
//    if (oddnum >= 1){
//        oddans++;
//        oddnum--;
//        return true;
//    }
//    return false;
//}
//int main(){
//    int length;
//    cin >> length;
//    int arr[length];
//    for (int i = 0; i < length; i++){
//        cin >> arr[i];
//        if (arr[i] % 2 == 0){
//            evennum++;
//        }
//        else{
//            oddnum++;
//        }
//    }
//    int ans = 0;
//    string evenodd = "even";
//    while (oddnum > evennum){
//        oddnum-=2;
//        evennum++;
//    }
//
//    if (evennum > oddnum + 1){
//        evennum = oddnum + 1;
//    }
//    cout << evennum + oddnum;
//}