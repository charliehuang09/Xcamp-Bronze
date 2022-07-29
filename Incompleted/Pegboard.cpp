//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//const int MOD = 998244353;
//
//// impl inverse
//
//// impl c(n, k)
//
//unsigned long long int fact[100005];
//void cat(int n){
//    fact[0] = 1;
//    for (int i = 1; i < n + 10; i++){
//        fact[i] = fact[i - 1]  * i;
//        fact[i] %= MOD;
//    }
//}
//
//unsigned long long int po(unsigned long long int b, unsigned long long int p){
//    unsigned long long int a = 1;
//    while(p > 0){
//        if (p % 2 == 1){
//            a = (a * b) % MOD;
//        }
//        p /= 2;
//        b = (b * b) % MOD;
//    }
//    return a;
//}
//
//unsigned long long int choose(unsigned long long int n, unsigned long long int i){
//    return ((fact[n] * po(fact[i], MOD - 2)) % MOD * po(fact[n - i], MOD - 2)) % MOD;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int input;
//    cin >> input;
//    cat(input);
//
//    for (int i = 0; i <= input; i++) {
////        cout << fact[i] << " ";
//    }
//
//    long long int output = 0;
//    for (int i = 0; i <= input; i+=2){
//        long long int catalan = (choose(i, i / 2) * po(i / 2 + 1, MOD - 2)) % MOD;
//        output += (choose(input, i) * catalan) % MOD;
//        output %= MOD;
//    }
//    cout << output;
////
////    cout << peg(4);
//}