#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int length, t;
    cin >> length;
    int input[length];
    for (int i = 0; i < length; i++){
        cin >> input[i];
    }
    int i;
    if (input[0] > input[1]){
        for (i = 1; i < length; i++){
            if (input[i - 1] < input[i]){
                break;
            }
        }
        t = i;
        for (int j = i; j < length; j++){
            if (input[i - 1] > input[i]){
                break;
            }
        }
    }
    else{

    }
}