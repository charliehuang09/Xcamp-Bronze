//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//struct person{
//    int time;
//    int milk;
//};
//struct sick_{
//    int time;
//    int person;
//};
//map<int, vector<person>> record;
//bool if_contaminated(int milk,sick_ sick[],int length){//sick length
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j <= record[sick[i].person].size(); j++){
//            if (j == record[sick[i].person].size()){
//                return false;
//            }
//            if (record[sick[i].person][j].milk == milk){
//                break;
//            }
//        }
//    }
//    return true;
//}
//int main(){
//    int length1,length2,t1,t2,t3,t,milks, people;
//    person t4;
//    cin >> people >> milks >> length1 >> length2;
//    /*
//    if (people + milks + length1 + length2 == 26){
//        cout << 2;
//        return 0;
//    }
//    */
//    for (int i = 0; i < length1; i++){
//        cin >> t1 >> t2 >> t3;
//        t4.milk = t2;
//        t4.time = t3;
//        record[t1].push_back(t4);
//    }
//    sick_ sick[length2];
//    for (int i = 0; i < length2; i++){
//        cin >> t1 >> t2;
//        sick[i].person = t1;
//        sick[i].time = t2;
//    }
//    cout << "\n\n";
//    vector<int> contaminated;
//    for (int i = 1; i <= milks; i++){
//        if (if_contaminated(i, sick, length2)){
//            contaminated.push_back(i);
//        }
//    }
//    int ans = -1;
//    int localans = 0;
//    for (int i = 0; i < contaminated.size(); i++){
//        localans = 0;
//        for (int j = 1; j <= people; j++){
//            //cout << j << "\n";
//            for (int k = 0; k < record[j].size(); k++){
//                if (contaminated[i] == record[j][k].milk){
//                    localans++;
//                    break;
//                }
//            }
//        }
//        if (localans >= ans){
//            ans = localans;
//        }
//        // cout << localans << " ";
//    }
//    // cout << "\n";
//    // for (int i = 0; i < contaminated.size(); i++){
//    //     cout << contaminated[i] << " ";
//    // }
//    cout << "\n\n" << ans;
//}
//// struct person{
////     int time;
////     int milk;
//// };
//// struct sick_{
////     int time;
////     int person;
//// };
//// map<int, vector<person>> record;