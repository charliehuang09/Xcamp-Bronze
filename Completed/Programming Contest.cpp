//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//vector<int> combinations1;
//vector<int> combinations2;
//int length, target;
//int length1;
//int length2;
//void get_combinations1(int input[], int sum, int index){
//    if (index == length1){
//        combinations1.push_back(sum);
//        return;
//    }
//    get_combinations1(input, sum, index + 1);
//    if (sum + input[index] <= target)get_combinations1(input, sum + input[index], index + 1);
//}
//void get_combinations2(int input[], int sum, int index){
//    if (index == length2){
//        combinations2.push_back(sum);
//        return;
//    }
//    get_combinations2(input, sum, index + 1);
//    if (sum + input[index] <= target)get_combinations2(input, sum + input[index], index + 1);
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> length >> target;
//    if (length % 2 == 0){
//        length1 = length / 2;
//        length2 = length / 2;
//    }
//    else{
//        length1 = length / 2 + 1;
//        length2 = length / 2;
//    }
//    int input1[length1];
//    int input2[length2];
//    for (int i = 0; i < length1; i++){
//        cin >> input1[i];
//    }
//    for (int i = 0; i < length2; i++){
//        cin >> input2[i];
//    }
//    get_combinations1(input1, 0, 0);
//    get_combinations2(input2, 0,0);
//    sort(combinations1.begin(), combinations1.end());
//    int output= 0;
//    for (int i = 0; i < combinations2.size(); i++){
//        auto it = prev(lower_bound(combinations1.begin(), combinations1.end(), target - combinations2[i]));
//        it += binary_search(combinations1.begin(), combinations1.end(), target - combinations2[i]);
//        output = max(output, *it + combinations2[i]);
//    }
//    cout << output;
//}