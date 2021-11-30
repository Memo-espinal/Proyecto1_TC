#ifndef EDGEDATA_H
#define EDGEDATA_H

#include <vector>
using std::vector;
#include <string>
using std::string;

class EdgeData
{
	private:
        string inicio, finalV;
        int peso;
	public:
		EdgeData();
		 EdgeData(string, string, int);
        //EdgeData();
        string getInicio();
        string getFinal();
        int getPeso();
        
		~EdgeData();
	protected:
};

#endif
