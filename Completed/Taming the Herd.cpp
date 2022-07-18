//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//vector<int> input;
//int length,t;
//void print(){
//    for (int i = 0; i < length; i++){
//        cout << input[i] << " ";
//    }
//    cout << "\n";
//}
//void deduce(int index,int num){
//    while (num > 0){
//        index--;
//        num--;
//        if (input[index] == -1){
//            input[index] = num;
//        }
//        else{
//            if (input[index] != num && input[index] != -1){
//                // cout << index << "\n";
//                // print();
//                cout << -1;
//                exit(69);
//            }
//            else{
//                input[index] = num;
//            }
//        }
//    }
//}
//int main(){
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        input.push_back(t);
//    }
//    input[0] = 0;
//    for (int i = 1; i < length; i++){
//        if (input[i] != -1){
//            deduce(i, input[i]);
//        }
//    }
//    int ans = 0;
//    for (int i = 0; i < length; i++){
//        if (input[i] == 0){
//            ans++;
//        }
//    }
//    cout << ans << " ";
//    for (int i = 0; i < length; i++){
//        if (input[i] == -1){
//            ans++;
//        }
//    }
//    cout << ans;
//    cout << "\n\n";
//    //print();
//}