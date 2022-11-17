#include "graph.h"

Graph *NewGraph(int rows, int cols)
{
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    InitAdjMatrix(graph);
    return graph;
}

void InitAdjMatrix (Graph *graph)
{
    graph->m_adjacencyList = (double **)malloc(graph->m_numRows * sizeof(double*));
    for(int i = 0; i < graph->m_numCols; ++i)
    {
        double *column = (double *)malloc(graph->m_numCols * sizeof(double));
        graph->m_adjacencyList[i] = column;
    }
}

double *GetAdjacent(Graph *graph, int row)
{
    return graph->m_adjacencyList[row];
}

void FreeGraph(Graph *graph)
{
    for(int i = 0; i < graph->m_numCols; ++i)
    {
        free(graph->m_adjacencyList[i]);
    }
    free(graph->m_adjacencyList);
}