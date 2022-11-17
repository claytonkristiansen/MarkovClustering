all: graph.c graph.h markovclustering.c
	gcc graph.c graph.h markovclustering.c -g -o mcl

clean: 
	rm mcl *.o