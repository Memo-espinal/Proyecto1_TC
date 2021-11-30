#include "ListEdge.h"

ListEdge::ListEdge()
{
}

ListEdge::ListEdge(vector<EdgeData*> lista){
    listaE = lista;
}

void ListEdge::print(){
    for(int i = 0; i < listaE.size(); i++){
        cout<<"Inicio : "<< listaE.at(i)->getInicio()<<" "<<endl;
        cout<<"Final : "<< listaE.at(i)->getFinal()<<" "<<endl;
        cout<<"Peso : "<< listaE.at(i)->getPeso()<<" "<<endl<<endl;
    }
}

ListEdge::~ListEdge()
{
}
