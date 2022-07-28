#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

struct start{
    int num;
    int index;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int l1, l2, angry;
    cin >> l1 >> l2 >> angry;
    int input1[l1];
    int input2[l2];
    for (int i = 0; i < l1; i++){
        cin >> input1[i];
    }
    for (int i = 0; i < l2; i++){
        cin >> input2[i];
    }
    int one = 0;
    int two = 0;
    int index = 0;
    int subtracted = 0;
    while(angry > 0){
        if (input1[one] != input2[two]){
            angry--;
            subtracted++;
        }
        one++;
        two++;
        one %= l1;
        two %= l2;
        index++;
        if (one == 0 && two == 0){
            break;
        }
    }
    int t = 1;
    while(angry - subtracted >= 0){
        angry -= subtracted;
        t++;
    }
    index *= t;
//    cout << index << " " << angry << " " << t << "\n";
    while(angry > 0){
        if (input1[one] != input2[two]){
            angry--;
            subtracted++;
        }
        one++;
        two++;
        one %= l1;
        two %= l2;
        index++;
        if (one == 0 && two == 0){
            break;
        }
    }
    cout << index;
//    cout << index << " " << angry << " " << t;
}