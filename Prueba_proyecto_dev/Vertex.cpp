#include "Vertex.h"

Vertex::Vertex()
{
}

Vertex::Vertex(ListVertex* listV){
    lista = listV;
}

/*void Vertex::printV(){
    cout<<"Esto es en el vertex"<<endl;
    for(int i = 0; i < lista->getList().size(); i++){
        cout<<lista->getList().at(i)<<i<<endl;
    }
}*/

Vertex::~Vertex()
{
}
