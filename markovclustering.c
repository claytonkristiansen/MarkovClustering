#include "graph.h"

int main()
{
    Graph *graph = NewGraph(16, 16);
    FreeGraph(graph);
    return 0;
}