#include <stdio.h>
#include <stdlib.h>

typedef struct Graph
{
    int m_numRows;
    int m_numCols;

    double **m_adjacencyList;
} Graph;

void InitAdjMatrix(Graph *graph);    //Function pointer

double *GetAdjacent(Graph *graph, int row);

Graph *NewGraph(int rows, int cols);

void FreeGraph(Graph *graph);