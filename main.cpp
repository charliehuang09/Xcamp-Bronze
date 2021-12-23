#include <bits/stdc++.h>
using namespace std;
int cow[10000];
int main(){
    int length;
    cin >> length;
    int input[length];
    for (int i = 0; i < length; i++){
        cin >> input[i];
        input[i]++;
    }
    sort (input, input + length);
    for (int i = 0; i < length; i++){
        cow[input[i]] = 1;
    }
    int ans = 0;
    int prev = INT_MAX;
    for (int i = length - 1; i >= 0; i--){
        int next = input[i] - input[i - 1];
        cout << next << " " << prev << " \n";
        if (next > prev){
            ans++;
        }
        prev = next;
    }
    cout << "\n\n" << ans;

}