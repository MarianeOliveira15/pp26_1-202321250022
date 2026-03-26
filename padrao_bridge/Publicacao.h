#ifndef PUBLICACAO_H
#define PUBLICACAO_H

#include <string>
#include "Implementador.h"
using namespace std;


class Publicacao {
protected:
    Implementador* imp;   
    string titulo;
    string autores;
    string outros;

public:
    Publicacao(Implementador* imp) : imp(imp) {}
    virtual ~Publicacao() {}

  
    void obterDados() {
        cout << "[Publicacao] obterDados() chamado" << endl;
        imp->getDados(this);  
    }

    virtual void setTitulo(const string& t) = 0;
    virtual void setAutores(const string& a) = 0;
    virtual void setOutros(const string& o)  = 0;

    virtual string getTitulo()      = 0;
    virtual string getAutor(int id) = 0;
};

#endif
