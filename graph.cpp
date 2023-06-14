#include "graph.h"

graph::graph(int countNode, int countEdge, bool directed) : countNode(countNode), countEdge(countEdge),
                                                            directed(directed) {}

void graph::setOutName(char* name) {
    out.open(name);
}

graph::~graph() {
    out.close();
}

void graph::addEdge(int to, int from, int dist) {
    if (directed) {
        Edge n = Edge(to, from, dist);
        listgraph[from].push_back(n);
    }else{
        Edge forward = Edge(to, from, dist);
        Edge back=Edge(from,to,dist);
        listgraph[from].push_back(forward);
        listgraph[to].push_back(back);
    }
}

void graph::createGraph() {
    srand(time(0));
    for (int i=0;i<countEdge;i++){
        addEdge(rand()%11,rand()%11,rand()%11);
    }
}

void graph::inputcreateGraph() {
    int from,to,dist;
    for (int i=0;i<countEdge;i++) {
        cin >> from >> to >> dist;
        addEdge(from,to,dist);
    }
}

void graph::testinputcreateGraph(vector<vector<Edge>> &a) {
    for (int i=0;i<countNode;i++){
        for (auto element:a[i]){
            listgraph[i].push_back(element);
        }
    }
}

vector<int>& graph::dijkstra(int s) {
    vector<int> d(countNode, -1);
    d[s] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0, s});
    while (!q.empty()) {
        auto [cur_d, v] = q.top();
        q.pop();
        if (cur_d > d[v])
            continue;
        for (auto element : listgraph[v]) {
            if (d[element.dist] > d[v] + element.from) {
                d[element.dist] = d[v] + element.from;
                q.push({d[element.dist], element.dist});
            }
        }
    }
    return d;
}

Edge::Edge(int to, int from, int dist) : to(to), from(from), dist(dist) {}
