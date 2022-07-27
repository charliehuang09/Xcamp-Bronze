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

    string input;
    cin >> input;
    cin >> input;
    int length;
    cin >> length;
    int a;
    char b;
    for (int i = 0; i < length; i++){
        cin >> a >> b;
        int l = 0;
        int r = 0;
        int needed = 0;
        if (input[0] != b){
            needed++;
        }
        int output = -1;
        while(r <= input.size()){
//            cout << needed << "   " << l << " " << r << "\n";
            if (needed > a){
                if (input[l] != b){
                    needed--;
                }
                l++;
                if (needed <= a){
                    output = max(output, r - l + 1);
                }
            }
            else{
                r++;
                if (input[r] != b){
                    needed++;
                }
                if (needed <= a){
                    output = max(output, r - l + 1);
                }
            }
        }
//        cout << "\n";
        cout << output << "\n";
    }
}
//3 4
//4 5
//5 6
//7 7
//8 8
//1 1
//2 2
//3 3
//4 4
//5 5
