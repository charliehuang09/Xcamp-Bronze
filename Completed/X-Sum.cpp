//#include <iostream>
//using namespace std;
//
//int t;
//int n,m;
//int values[200][200];
//
//void read(){
//    cin>>n>>m;
//    for(int i = 0;i<n;i++){
//        for(int j = 0;j<m;j++){
//            cin>>values[i][j];
//        }
//    }
//}
//
//bool inbound(int x, int y){
//    if (x < 0){
//        return false;
//    }
//    if (y < 0){
//        return false;
//    }
//    if (x >= n){
//        return false;
//    }
//    if (y >= m){
//        return false;
//    }
//    return true;
//}
//
//int attack(int currentx, int currenty){
//
//    int output = 0;
//    int x = currentx;
//    int y = currenty;
//    while (inbound(x, y)){
//        output += values[x][y];
//        x++;
//        y++;
//    }
//    x = currentx;
//    y = currenty;
//    while (inbound(x, y)){
//        output += values[x][y];
//        x--;
//        y++;
//    }
//    x = currentx;
//    y = currenty;
//    while (inbound(x, y)){
//        output += values[x][y];
//        x++;
//        y--;
//    }
//    x = currentx;
//    y = currenty;
//    while (inbound(x, y)){
//        output += values[x][y];
//        x--;
//        y--;
//    }
//    output -= values[currentx][currenty] * 3;
//    return output;
//}
//
//int main(){
//    cin>>t;
//    for(int testcase = 0;testcase<t;testcase++){
//        read();
//        int ans = 0;
//        for(int i = 0;i<n;i++){
//            for(int j = 0;j<m;j++){
//                ans = max(ans,attack(i,j));
//            }
//        }
//        cout<<ans<<endl;
//    }
//}