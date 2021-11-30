#include "EdgeData.h"

EdgeData::EdgeData()
{
}

EdgeData::EdgeData(string nombre, string nombre2, int pesoV){
    inicio = nombre;
    finalV = nombre2;
    peso = pesoV;
}

string EdgeData::getInicio(){
    return inicio;
}

string EdgeData::getFinal(){
    return finalV;
}

int EdgeData::getPeso(){
    return peso;
}

EdgeData::~EdgeData()
{
}
