//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//class Graph{
//public:
//    vector<set<int>> graph;
//    void add_node(){
//        set<int> t;
//        graph.push_back(t);
//    }
//    void set_node(int num){
//        int add = num - graph.size();
//        set<int> t;
//        for (int i = 0; i < add; i++){
//            graph.push_back(t);
//        }
//    }
//    void add_edge(int x, int y){
//        graph[x].insert(y);
//    }
//    bool is_connected(int x, int y){
//        if (graph[x].find(y) != graph[x].end()){
//            return true;
//        }
//        return false;
//    }
//    set<int> get_node(int x){
//        return graph[x];
//    }
//    void print(){
//        int size = graph.size();
//        cout << "\n";
//        for (int i = 0; i < graph.size(); i++){
//            cout << i << "  ";
//            for (auto &itr : graph[i]){
//                cout << itr << " ";
//            }
//            cout << "\n";
//        }
//        cout << "\n";
//    }
//};
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    Graph graph;
//    graph.set_node(10);
//    graph.print();
//    graph.add_edge(0, 10);
//    graph.print();
//    cout << graph.is_connected(0,10) << " ";
//    cout << graph.is_connected(0,1) << "\n";
//    set<int> node = graph.get_node(0);
//    for (auto itr : node){
//        cout << itr << " ";
//    }
//    cout << "\n";
//}