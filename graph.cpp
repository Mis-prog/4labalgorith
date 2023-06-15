#include "graph.h"

graph::graph(int countNode, int countEdge, bool directed) : countNode(countNode), countEdge(countEdge),
                                                            directed(directed) {}

void graph::setOutName(char* name) {
    out.open(name);
}

graph::~graph() {
    out.close();
}

void graph::addEdge(int from, int to, int dist) {
    if (directed) {
        Edge n = Edge(from, to, dist);
        listgraph[from].push_back(n);
        Node.insert(from);Node.insert(to);
    }else{
        Edge forward = Edge(from, to, dist);
        Edge back=Edge(to,from,dist);
        listgraph[from].push_back(forward);
        listgraph[to].push_back(back);
        Node.insert(from);Node.insert(to);
    }
}

void graph::createGraph() {
    setOutName("commands.js");
    out << "window.prog=`" << endl;
    listgraph.resize(countNode);
    srand(time(0));
    for (int i=0;i<countEdge;i++){
        addEdge(rand()%countNode,rand()%countNode,1+rand()%10);
    }
    outDataSet();
    if (directed){
        out << "drawdir" << endl;
    } else{
        out << "draw" << endl;
    }
    out << "`";
}

void graph::inputcreateGraph() {
    setOutName("commands.js");
    out << "window.prog=`" << endl;
    vector<Edge> a;
    listgraph.resize(countNode,a);
    int from,to,dist;
    for (int i=0;i<countEdge;i++) {
        cin >> from >> to >> dist;
        addEdge(from,to,dist);
    }
    outDataSet();
    if (directed){
        out << "drawdir" << endl;
    } else{
        out << "draw" << endl;
    }
    out << "`";
}

void graph::testinputcreateGraph(vector<vector<Edge>> &a) {
    setOutName("commands.js");
    out << "window.prog=`" << endl;
    listgraph.resize(countNode);
    for (int i=0;i<countNode;i++){
        for (auto element:a[i]){
            listgraph[i].push_back(element);
            Node.insert(element.from);Node.insert(element.to);
        }
    }
    outDataSet();
    if (directed){
        out << "drawdir" << endl;
    } else{
        out << "draw" << endl;
    }
    out << "`";
}

vector<int>& graph::dijkstra(int s) {
    vector<int> d(countNode, -1);
    path.resize(countNode);
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
                path[element.dist]=v;
                q.push({d[element.dist], element.dist});
            }
        }
    }
    return d;
}

void graph::print_path(int s,int v) {
    while (v!=s){
        cout << v <<endl;
        v=path[v];
    }
    cout << s << endl;
}

void graph::outDataSet() {
    for(auto i:Node){
        out << i << endl;
    }
    for(int i=0;i<countNode;i++){
        for(auto element:listgraph[i]){
            out << i << "-" << element.to << ",label=" << element.dist << endl;
        }
    }
}

Edge::Edge(int from, int to, int dist) : to(to), from(from), dist(dist) {}
