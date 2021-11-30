
#include "ListVertex.h"
#include "Vertex.h"
#include "EdgeData.h"
#include "ListEdge.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

ListVertex* listVertex;
ListEdge* listaEdge;
vector<EdgeData*> listaArista;
vector<int> gradoVertices;

void imprimirLista();
void gradoVertice();
void mayorMenor();
bool ciclos();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {    vector<string> listaV;
    cout << "\t Bienvenido!" << endl;
    cout << "========================================" << endl;
    cout << "Ingrese el numero de vertices a crear: ";
    int numero;
    cin >> numero;
    cout << "========================================" << endl;
    cout << "\n";
    cout << "========================================" << endl;
    for (int i = 0; i < numero; i++)
    {
        cout << "Ingrese el nombre del vertice numero " << i << ": ";
        string nombre;
        cin >> nombre;
        listaV.push_back(nombre);
        cout << "========================================" << endl;
    }
    cout << "     VERTICES CREADOS EXITOSAMENTE." << endl;
    cout << "========================================" << endl;
    cout << "\n";
    cout << "========================================" << endl;
    cout << "\t Conexion de aristas \n";
    cout << "========================================" << endl;
    listVertex = new ListVertex(listaV);
    //Vertex* vertex = new Vertex(listVertex);
    cout << "Ingrese el numero de aristas totales a crear: ";
    int numeroArista;
    cin >> numeroArista;
    while (numeroArista != 0)
    {
        cout << "========================================" << endl;
        cout << "Ingrese el inicio de la arista a conectar: ";
        int inicio, finalA, peso;
        cout << " " << endl;
        cout << " " << endl;
        imprimirLista();
        cin >> inicio;
        //validacion
        cout << "========================================" << endl;
        cout << "  INICIO DE ARISTA CREADO EXISTOSAMENTE." << endl;
        cout << "========================================" << endl;
        cout << "\n";
        cout << "========================================" << endl;
        cout << "Ingrese el final de la arista: \n";
        cout << "========================================" << endl;
        cout << "\n";
        imprimirLista();
        cin >> finalA;
        cout << "========================================" << endl;
        cout << "  ARISTA CONECTADA EXITOSAMENTE." << endl;
        cout << "========================================" << endl;
        cout << "\n";
        cout << "========================================" << endl;
        cout << "Ingrese el peso de la arista: \n";
        cout << "========================================" << endl;
        cin >> peso;
        cout << "========================================" << endl;
        cout << "  PESO AGREGADO EXITOSAMENTE.  \n";
        cout << "========================================" << endl;
        EdgeData *edgeData = new EdgeData((listVertex->getList().at(inicio)), (listVertex->getList().at(finalA)), peso);
        cout << endl
             << endl;
        listaArista.push_back(edgeData);
        numeroArista--;
    }
    cout << "========================================" << endl;
    cout << "     GRADO DE LOS VERTICES CREADOS.\n";
    cout << "========================================" << endl;
    gradoVertice();
    cout << "========================================" << endl;
    cout << "\n";
    cout << "\n";
    cout << "========================================" << endl;
    cout << "CLASIFICACION DE LOS VERTICES MAYORES Y MENORES \n";
    cout << "========================================" << endl;
    mayorMenor();
    cout << "========================================" << endl;
    cout << "\n";
    cout << "\n";
    cout << "========================================" << endl;
    cout << "       IDENTIFICADOR DE CICLOS" << endl;
    cout << "========================================" << endl;
    bool ciclosGrafo = ciclos();
    if (ciclosGrafo)
    {
        cout << "*   El grafo creado anteriormente contiene ciclos." << endl;
        cout << "========================================" << endl;
    }
    else
    {
        cout << "*   El grafo creado no tiene ciclos." << endl;
        cout << "========================================" << endl;
    }
    return -1;
}


void imprimirLista(){
    cout<<"\t--Lista de vertices--\n";
    for(int i = 0; i < listVertex->getSize(); i++){
        int cont = 0;
        cout<<"\t"<<i<<". "<<listVertex->getList().at(i)<<endl;
    }
}

void gradoVertice(){
    int cont = 0;
    for(int i = 0; i < listVertex->getSize(); i++){
        string nombreVertice = listVertex->getName(i);
        for (int j = 0; j < listaArista.size(); j++){
            if(listaArista.at(j)->getInicio().compare(nombreVertice) == 0){
                cont++;
            }
            if(listaArista.at(j)->getFinal().compare(nombreVertice) == 0){
                cont++;
            }
        }
        cout<<"El vertice "<<nombreVertice<<" es de grado "<<cont<<endl;
        gradoVertices.push_back(cont);
        cont = 0;
    }
}

void mayorMenor(){
    int max = 0, menor = gradoVertices.at(0), posicionMax, posicionMin = 0;
    vector<int> posiciones;
    for(int i = 0; i < gradoVertices.size(); i++){
        if(gradoVertices.at(i) > max){
            max = gradoVertices.at(i);
            posicionMax = i;
        } 
        if(gradoVertices.at(i) < menor){
            menor = gradoVertices.at(i);
            posicionMin = i;
        } 
    }
    for (int i = 0; i < gradoVertices.size(); i++){
        if(gradoVertices.at(i) == max){
            cout<<"El vertice de grado mayor es "<<listVertex->getList().at(i)<<" que tiene grado "<<max<<endl;
        }
    }
    for (int i = 0; i < gradoVertices.size(); i++){
        if(gradoVertices.at(i) == menor){
            cout<<"El vertice de grado menor es "<<listVertex->getList().at(i)<<" que tiene grado "<<menor<<endl;
        }
    }
}

bool ciclos(){
    bool cond = false;
    for (int i = 0; i < listaArista.size(); i++){
        if(listaArista.at(i)->getInicio() == listaArista.at(i)->getFinal()){
            cond = true;
            break;
        }
    }
    return cond;
}
