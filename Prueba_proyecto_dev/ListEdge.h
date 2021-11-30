#ifndef LISTEDGE_H
#define LISTEDGE_H

#include "EdgeData.h"
#include <vector>
using std::vector;
#include<string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

class ListEdge
{
	private:
		 vector<EdgeData*> listaE;
	public:
		ListEdge();
		 ListEdge(vector<EdgeData*>);
        //ListEdge();
        void print();
        //vector<string> getListEdge();
		~ListEdge();
	protected:
};

#endif
