#ifndef IMPLEMENTADOR_XML_H
#define IMPLEMENTADOR_XML_H

#include <iostream>
#include "Implementador.h"
#include "Publicacao.h"
using namespace std;

class ImplementadorXML : public Implementador {
public:
    void getDados(Publicacao* tipo) override {
        cout << "[ImplementadorXML] getDados() chamado" << endl;

        tipo->setTitulo("Titulo vindo do XML");
        tipo->setAutores("Autor XML");
        tipo->setOutros("Dado extra XML");
    }
};

#endif