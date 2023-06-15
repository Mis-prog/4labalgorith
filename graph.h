#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <queue>
#include <set>

using namespace std;

struct Edge{
    int from,to,dist;
    Edge(int from, int to, int dist);
};

class graph {
    int countNode,countEdge;
    bool directed;
    ofstream out;
    vector<vector<Edge>> listgraph;
    vector<vector<Edge>> printgraphnotdirected;
    vector<int> path;
    set<int> Node;
public:
    graph(int countNode, int countEdge, bool directed=0);
    void setOutName(char* name);
    void addEdge(int from,int to,int dist);
    void createGraph();
    void inputcreateGraph();
    void testinputcreateGraph(vector<vector<Edge>>& a,vector<vector<Edge>>& print);
    vector<int>& dijkstra(int s);
    void print_path(int v,int s);
    void outDataSet(vector<vector<Edge>>& print);
    virtual ~graph();
};