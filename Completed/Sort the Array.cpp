//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void printArray(int a[],int n){
//    return;
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<" ";
//    cout<<endl;
//}
//
//int main(){
////    ios_base::sync_with_stdio(0);
////    cin.tie(0);
//
//    int length;
//    cin >> length;
//    int input[length + 2];
//    input[0] = -1;
//    for (int i = 1; i <= length; i++){
//        cin >> input[i];
//    }
//    input[length + 1] = 2147483647;
//
//    if (std::is_sorted(input, input + length + 1)) {
//        cout << "yes\n1 1";
//        return 0;
//    }
//
//    int start,end;
//    int index = 1;
//    while (input[index - 1] <= input[index] && index - 1 < length + 2){
//        index++;
//    }
//    start = index - 1;
//    while (input[index - 1] >= input[index] && index - 1 < length + 2){
//        index++;
//    }
//    end = index - 1;
//    while (input[index - 1] <= input[index] && index - 1 < length + 2){
//        index++;
//    }
//
////    cout << start << " " << end << "\ln";
//    int temp[end - start + 1];
//    printArray(input, length + 2);
//    for (int i = start; i <= end; i++){
////        cout << end - start - (i - start) << " ";
//        temp[end - start - (i - start)] = input[i];
//    }
//    printArray(input, length + 2);
//
//    for (int i = 0; i < end - start + 1; i++){
//        input[i + start] = temp[i];
//    }
//    printArray(input, length + 2);
//    if (std::is_sorted(input, input + length + 1)) {
//        cout << "yes\n";
//        cout << start << " " << end;
//        return 0;
//    }
//    cout << "no";
//}

//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    int array[3] = {1, 2, 3};
//    for (int i = 0; i < 3; i++){
//        for (int j = 0; j < 3; j++){
//            for (int k = 0; k < 3; k++){
//                if (i != j && i != k && j != k){
//                    cout << array[i] << array[j] << array[k] << "\n";
//                }
//            }
//        }
//    }
//}
