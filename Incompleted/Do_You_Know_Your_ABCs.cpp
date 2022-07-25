#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
const int length = 7;

bool solve(int a, int b, int c, int ab, int bc, int ca, int abc){
    if (a + b != ab){
        return false;
    }
    if (b + c != bc){
        return false;
    }
    if (c + a != ca){
        return false;
    }
    if (a + b + c != abc){
        return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int input[length];
    for (int i = 0; i < length; i++){
        cin >> input[i];
    }

    set<int> check;

    for (int a = 0; a < length; a++){
        for (int b = 0; b < length; b++){
            for (int c = 0; c < length; c++){
                for (int d = 0; d < length; d++){
                    for (int e = 0; e < length; e++){
                        for (int f = 0; f < length; f++){
                            for (int g = 0; g < length; g++){
                                check.insert(a);
                                check.insert(b);
                                check.insert(c);
                                check.insert(d);
                                check.insert(e);
                                check.insert(f);
                                check.insert(g);
                                if (check.size() == length){
//                                    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << "\n";
                                    if (solve(input[a], input[b], input[c], input[d], input[e], input[f], input[g])){
                                        cout << input[a] << " " << input[b] << " " << input[c];
//                                        return 0;
                                    }
                                }
                                check.clear();
                            }
                        }
                    }
                }
            }
        }
    }
}