#include <iostream>
#include <queue>
using namespace std;
int evenans = 0;
int oddans = 0;
int evennum = 0;
int oddnum = 0;
bool evencheck(){
    if (evennum >= 1){
        evenans++;
        evennum--;
        return true;
    }
    if (oddnum >= 2){
        oddnum -=2;
        evenans++;
        return true;
    }
    return false;
}
 
bool oddcheck(){
    if (oddnum >= 1){
        oddans++;
        oddnum--;
        return true;
    }
    return false;
}
int main(){
    int length;
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 0){
            evennum++;
        }
        else{
            oddnum++;
        }
    }
 
    evenans = 0;
    oddans = 0;
 
    bool run = true;
    while (run){
        if (evenans == oddans){
            if (evencheck()) continue;
            // if (oddcheck()) continue;
            run = false;
            continue;
        }
        if (evenans < oddans){
            if (evencheck()) continue;
            run = false;
            continue;
        }
        if (evenans > oddans){
            if (oddcheck()) continue;
            run = false;
            continue;
        }
    }
    cout << "\n";
    if (evenans == oddans){
        cout << evenans + oddans - 1;
        return 0;
    }
    cout << evenans + oddans;
}