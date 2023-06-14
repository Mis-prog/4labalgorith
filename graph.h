#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Edge{
    int to,from,dist;
    Edge(int to, int from, int dist);
};

class graph {
    int countNode,countEdge;
    bool directed;
    ofstream out;
    vector<vector<Edge>> listgraph;
public:
    graph(int countNode, int countEdge, bool directed=0);
    void setOutName(char* name);
    void addEdge(int to,int from,int dist);
    void createGraph();
    void inputcreateGraph();
    void testinputcreateGraph(vector<vector<Edge>>& a);
    virtual ~graph();
};