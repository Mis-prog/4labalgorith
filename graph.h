#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <queue>
#include <set>
#include <windows.h>
using namespace std;

const int INF=1e9;

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
    int getCountNode() const;

    graph(int countNode, int countEdge, bool directed=0);
    void setOutName(char* name);
    void addEdge(int from,int to,int dist);
    void createGraph(char *fname);
    vector<int> dijkstraSet(int start);
    void inputcreateGraph(char *fname);
    void testinputcreateGraph(char *fname,vector<vector<Edge>>& a,vector<vector<Edge>>& print);
    void outDataSet(vector<vector<Edge>>& print);
    bool check(vector<Edge>& c,int n);
    virtual ~graph();
};