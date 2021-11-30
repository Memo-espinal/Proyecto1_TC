#ifndef LISTVERTEX_H
#define LISTVERTEX_H

#include <vector>
using std::vector;
#include<string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

class ListVertex
{
	private:
        vector<string> listaV;
	public:
		ListVertex();
		
		 ListVertex(vector<string>);
        /*ListVertex();
        void setList(vector<string>);
        void addElement(string);
        vector<string> getListVertex();
        int getSize();*/
        vector<string> getList();
        int getSize();
        string getName(int);
        void print();
		
		~ListVertex();
	protected:
};

#endif
