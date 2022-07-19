#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

struct coord{
    int x;
    int y;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    coord output;
    coord input1, input2;
    cin >> input1.x >> input1.y >> input2.x >> input2.y;
    set<int> coords;
    coords.insert(input1.x);
    coords.insert(input2.x);
    coords.insert(input1.y);
    coords.insert(input2.y);
    coords.erase(0);
    coords.erase(0);

    if (input1.x - input2.x != input1.y - input2.y && input1.x != input2.x && input1.y != input2.y){
        cout << -1;
        return 0;
    }

    if (coords.size() > 1){
        if (coords.size() == 2){
            int t1 = *(coords.begin());
            coords.erase(t1);
            int t2 = *(coords.begin());
            int bottom = min(t1, t2);
            int top = max(t1, t2);
            output.x = bottom;
            output.y = bottom;
            if (output.x != input1.x || output.y != input1.y){
                if (output.x != input2.x || output.y != input2.y){
                    cout << output.x << " " << output.y << " ";
                }
            }
            output.x = bottom;
            output.y = top;
            if (output.x != input1.x || output.y != input1.y){
                if (output.x != input2.x || output.y != input2.y){
                    cout << output.x << " " << output.y << " ";
                }
            }
            output.x = top;
            output.y = bottom;
            if (output.x != input1.x || output.y != input1.y){
                if (output.x != input2.x || output.y != input2.y){
                    cout << output.x << " " << output.y << " ";
                }
            }
            output.x = top;
            output.y = top;
            if (output.x != input1.x || output.y != input1.y){
                if (output.x != input2.x || output.y != input2.y){
                    cout << output.x << " " << output.y << " ";
                }
            }
            return 0;
        }
        cout << -1;
        return 0;
    }

    int value = *(coords.begin());
    output.x = 0;
    output.y = value;
    if (output.x != input1.x || output.y != input1.y){
        if (output.x != input2.x || output.y != input2.y){
            cout << output.x << " " << output.y << " ";
        }
    }
    output.x = 0;
    output.y = 0;
    if (output.x != input1.x || output.y != input1.y){
        if (output.x != input2.x || output.y != input2.y){
            cout << output.x << " " << output.y << " ";
        }
    }
    output.x = value;
    output.y = 0;
    if (output.x != input1.x || output.y != input1.y){
        if (output.x != input2.x || output.y != input2.y){
            cout << output.x << " " << output.y << " ";
        }
    }
    output.x = value;
    output.y = value;
    if (output.x != input1.x || output.y != input1.y){
        if (output.x != input2.x || output.y != input2.y){
            cout << output.x << " " << output.y << " ";
        }
    }


}