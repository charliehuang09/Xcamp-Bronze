//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int visited[10][10];
//int dist[10][10];
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//struct PNT {
//	int x, y;
//	PNT (int x0, int y0) : x(x0), y(y0){};
//};
//
//int main(){
//    string input[10];
//    int ex, ey, sx, sy;
//    for (int i = 0; i < 10; i++){
//        cin >> input[i];
//        for (int j = 0; j < 10; j++){//intitlaize start and end
//            if (input[i][j] == 'B'){
//                ex = i;
//                ey = j;
//            }
//            if (input[i][j] == 'L'){
//                sx = i;
//                sy = j;
//            }
//        }
//    }
//    visited[sx][sy] = 1;
//    queue<PNT> q;
//    q.push(PNT(sx,sy));
//    while (!q.empty()){
//        PNT pt = q.front();
//        q.pop();
//        for (int i = 0; i < 4; i++){
//            int nx = pt.x + dx[i];
//            int ny = pt.y + dy[i];
//            if (nx >= 0 && nx < 10 && ny >= 0 && ny < 10 && input[nx][ny] != 'R') {
//                if (visited[nx][ny] == 0) { // first time to be here
//                    dist[nx][ny] = dist[pt.x][pt.y] + 1; // shortest path to this pos
//                    visited[nx][ny] = 1;
//                    q.push(PNT(nx, ny));
//                }
//            }
//        }
//    }
//    cout << dist[ex][ey] - 1;
//}
//
///*
//3 2
//2 1
//1 1
//1 2
//*/