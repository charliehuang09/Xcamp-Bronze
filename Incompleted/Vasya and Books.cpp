#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int length;
    cin >> length;
    vector<int> books;
    map<int, int> map;
    int t;
    for (int i = 0; i < length; i++){
        cin >> t;
        books.push_back(t);
        map[t] = 1;
    }

    int input;
    for (int i = 0; i < length; i++){
        cin >> input;
        if (map[input] == 1){
            map[input] = 0;
            int x = 0;
            while(books[0] != input){
                x++;
                map[books[0]] = 0;
                books.erase(books.begin());
            }
            map[books[0]] = 0;
            books.erase(books.begin());
            cout << x + 1 << " ";
        }
        else{
            cout << "0 ";
        }
    }

}