
#include "graph.h"

//#include <gtest/gtest.h>

int main() {
    setlocale(LC_ALL, "ru_RU.cp1251");
    graph g(10,50);
    g.createGraph("commands.js");
    g.dijkstraSet(0);
    return 0;
}
