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

string get_type(coord input){
    if (input.x == 0 && input.y == 0){
        return "bl";
    }
    if (input.x == 0){
        return "tl";
    }
    if (input.y == 0){
        return "br";
    }
    if (input.x == input.y){
        return "tr";
    }
    cout << -1;
    exit(0);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    coord input1, input2;
    cin >> input1.x >> input1.y >> input2.x >> input2.y;
    string a = get_type(input1);
    string b = get_type(input2);

}