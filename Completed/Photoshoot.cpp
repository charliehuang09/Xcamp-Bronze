//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//vector<int> ans;
//void cout_(){
//    for (int i = 0; i < ans.size(); i++){
//        cout << ans[i] << " ";
//    }
//}
//int main(){
//    int length;
//    cin >> length;
//    int input[length];
//    for (int i = 0; i < length - 1; i++){
//        cin >> input[i];
//    }
//    int test = 0;
//    set<int> number;
//    while (true){
//        bool done = true;/;p0.;
//        ans.clear();
//        number.clear();
//        test++;
//        int size = 1;
//        number.insert(test);
//        ans.push_back(test);
//        for (int i = 0; i < length - 1; i++){
//            size++;
//            int nextnum = input[i] - ans[ans.size() - 1];
//            number.insert(nextnum);
//            ans.push_back(nextnum);
//            if (nextnum <= 0){
//                done = false;
//                break;
//            }
//            if (number.size() != size){
//                done = false;
//                break;
//            }
//        }
//        if (done == true){
//            cout_();
//            return 0;
//        }
//    }
//}