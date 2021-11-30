#include "ListVertex.h"

ListVertex::ListVertex()
{
}

ListVertex::ListVertex(vector<string> lista){
    listaV = lista;
}

int ListVertex::getSize(){
    return listaV.size();
}

vector<string> ListVertex::getList(){
    return listaV;
}

string ListVertex::getName(int pos){
    return listaV.at(pos);
}

void ListVertex::print(){
    for (int i = 0; i < listaV.size(); i++){
        cout<<listaV.at(i)<<" "<<endl;
    }
    
}

ListVertex::~ListVertex()
{
}
