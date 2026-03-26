#ifndef IMPLEMENTADOR_BD_H
#define IMPLEMENTADOR_BD_H

#include <iostream>
#include "Implementador.h"
#include "Publicacao.h"

using namespace std;

class ImplementadorBD : public Implementador {
public:
    void getDados(Publicacao* tipo) override {
        cout << "[ImplementadorBD] getDados() chamado" << endl;
        
        tipo->setTitulo("Titulo vindo do Banco de Dados");
        tipo->setAutores("Autor BD");
        tipo->setOutros("Dado extra BD");
    }
};

#endif
