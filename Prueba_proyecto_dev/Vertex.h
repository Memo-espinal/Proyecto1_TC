#ifndef VERTEX_H
#define VERTEX_H
#include "ListVertex.h"

#include <iostream>
using std::cout;
using std::endl;

class Vertex
{
	private:
        ListVertex* lista;
	public:
		Vertex();
		Vertex(ListVertex*);
        //Vertex();
        //void printV();
		~Vertex();
	protected:
};

#endif
