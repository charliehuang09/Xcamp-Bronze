//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int main(){
//    int length;
//    cin >> length;
//
//    for (int i = 0; i < length; i++){
//        string input;
//        cin >> input;
//        char prev = input[0];
//        int cw = 0;
//        int ccw = 0;
//        for (int j = 1; j < input.size(); j++){
//            if (prev != input[j]){
//                if (input[j] == 'N'){
//                    if (prev == 'W'){
//                        //cout << "CW ";
//                        cw++;
//                    }
//                    if (prev == 'E'){
//                        //cout << "CCW ";
//                        ccw++;
//                    }
//                }
//                if (input[j] == 'W'){
//                    if (prev == 'S'){
//                        //cout << "CW ";
//                        cw++;
//                    }
//                    if (prev == 'N'){
//                        //cout << "CCW ";
//                        ccw++;
//                    }
//                }
//                if (input[j] == 'S'){
//                    if (prev == 'E'){
//                        //cout << "CW ";
//                        cw++;
//                    }
//                    if (prev == 'W'){
//                        //cout << "CCW ";
//                        ccw++;
//                    }
//                }
//                if (input[j] == 'E'){
//                    if (prev == 'N'){
//                        //cout << "CW ";
//                        cw++;
//                    }
//                    if (prev == 'S'){
//                        //cout << "CCW ";
//                        ccw++;
//                    }
//                }
//            }
//            prev = input[j];
//        }
//        if (cw > ccw){
//            cout << "CW\n";
//        }
//        else{
//            cout << "CCW\n";
//        }
//    }
//}
//
///*
//CCW
//CCW
//CW
//CW
//CW
//CW
//CW
//CCW
//CCW
//CW
//CW
//CW
//CCW
//CCW
//*/