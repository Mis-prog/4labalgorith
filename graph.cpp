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
        if (!check(listgraph[from],to)){
            Edge n = Edge(from, to, dist);
            listgraph[from].push_back(n);
            printgraphnotdirected[from].push_back(n);
            Node.insert(from);Node.insert(to);
        }
    }else{
        if (!check(listgraph[from],to)) {
            Edge forward = Edge(from, to, dist);
            Edge back = Edge(to, from, dist);
            printgraphnotdirected[from].push_back(forward);
            listgraph[from].push_back(forward);
            listgraph[to].push_back(back);
            Node.insert(from);
            Node.insert(to);
        }
    }
}

void graph::createGraph(char *fname) {
    setOutName(fname);
    out << "window.prog=`" << endl;
    listgraph.resize(countNode);
    printgraphnotdirected.resize(countNode);
    srand(time(0));
    for (int i=0;i<countEdge;i++){
        addEdge(rand()%countNode,rand()%countNode,1+rand()%10);
    }
    outDataSet(printgraphnotdirected);
    if (directed){
        out << "drawdir" << endl;
    } else{
        out << "draw" << endl;
    }
}

void graph::inputcreateGraph(char *fname) {
    setOutName(fname);
    out << "window.prog=`" << endl;
    listgraph.resize(countNode);
    printgraphnotdirected.resize(countNode);
    int from,to,dist;
    for (int i=0;i<countEdge;i++) {
        cin >> from >> to >> dist;
        addEdge(from,to,dist);
    }
    outDataSet(printgraphnotdirected);
    if (directed){
        out << "drawdir" << endl;
    } else{
        out << "draw" << endl;
    }
}

void graph::testinputcreateGraph(char *fname,vector<vector<Edge>> &a,vector<vector<Edge>>& print) {
    setOutName(fname);
    out << "window.prog=`" << endl;
    listgraph.resize(countNode);
    for (int i=0;i<countNode;i++){
        for (auto element:a[i]){
            listgraph[i].push_back(element);
            Node.insert(element.from);Node.insert(element.to);
        }
    }
    outDataSet(print);
    if (directed){
        out << "drawdir" << endl;
    } else{
        out << "draw" << endl;
    }
}


void graph::outDataSet(vector<vector<Edge>>& print) {
    for(auto i:Node){
        out << i << endl;
    }
    for (int i = 0; i < countNode; i++) {
        for (auto element: print[i]) {
                out << element.from << "-" << element.to << ",label=" << element.dist << endl;
        }
    }
}

vector<int> graph::dijkstraSet(int start) {
    out << "p,Find the shortest paths from the vertex " << start << endl;
    vector<int> dist(countNode,INF);
    dist[start]=0;
    //out << start << ",color=lime,width=5\n";
    //out << start << ",shape=box,color=red,label=" << start << "/dist:" << dist[start] << endl;
    set<pair<int,int>> q;
    q.insert({dist[start],start});
    while (!q.empty()){
        int nearest=q.begin()->second;
        out << nearest << ",shape=box,color=blue,label=" << nearest << "/dist:" << dist[nearest] << endl;
        out << "p, go to vertex" << nearest << " with minimal distance| ";
        for (auto i:q) {
            out << i.second << " distance:" << i.first << " | ";
        }
        out << endl;
        q.erase(q.begin());
        for (auto &element:listgraph[nearest]){
            if(dist[element.to]>dist[nearest]+element.dist) {
                if (directed) {
                    out << "w,500" << endl;
                    out << nearest << "-" << element.to << ",color=lime,width=5\n";
                    out << "w,500" << endl;
                    q.erase({dist[element.to], element.to});
                    dist[element.to] = dist[nearest] + element.dist;
                    out << element.to << ",shape=box,color=red,label=" << element.to << "/dist:" << dist[element.to]
                        << endl;
                    q.insert({dist[element.to], element.to});
                }else{
                    if (check(printgraphnotdirected[nearest],element.to)){
                          out << "w,500" << endl;
                        out << nearest << "-" << element.to << ",color=lime,width=5\n";
                        out << "w,500" << endl;
                        q.erase({dist[element.to], element.to});
                        dist[element.to] = dist[nearest] + element.dist;
                        out << element.to << ",shape=box,color=red,label=" << element.to << "/dist:" << dist[element.to]
                            << endl;
                        q.insert({dist[element.to], element.to});
                    }else{
                        out << "w,500" << endl;
                        out << element.to << "-" << nearest << ",color=lime,width=5\n";
                        out << "w,500" << endl;
                        q.erase({dist[element.to], element.to});
                        dist[element.to] = dist[nearest] + element.dist;
                        out << element.to<< ",shape=box,color=red,label=" << element.to << "/dist:" << dist[element.to]
                            << endl;
                        q.insert({dist[element.to], element.to});
                    }
                }

                out << "p,better distance to " << element.to << " = "<<dist[element.to]<<endl;
//                for (auto i:q){
//                    if (i.second==element.to){
//                        out << i.first << " ";
//                    }
//                }
//                out << endl;
                }
            }
        out<<"pause\n";
        }
    out << "p,best distance: |";
    for (int i=0;i<countNode;i++){
         out << i << " = "<<dist[i] << "|";
    }
    out << endl;
    out << "pause" << endl;
    out << "`";
    return dist;
}


bool graph::check(vector<Edge>& c,int n) {
    for (auto i:c){
        if (i.to==n){
            return true;
        }
    }
    return false;
}

int graph::getCountNode() const {
    return countNode;
}

Edge::Edge(int from, int to, int dist) : to(to), from(from), dist(dist) {}
