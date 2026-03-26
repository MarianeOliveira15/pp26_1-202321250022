#ifndef REVISTA_H
#define REVISTA_H

#include <iostream>
#include "Publicacao.h"
using namespace std;

class Revista : public Publicacao {
private:
    std::string artigo;

public:
    Revista(Implementador* imp) : Publicacao(imp) {}

    void setTitulo(const string& t) override {
        cout << "[Revista] setTitulo() chamado com: " << t << endl;
        titulo = t;
    }

    void setAutores(const string& a) override {
        cout << "[Revista] setAutores() chamado com: " << a << endl;
        autores = a;
    }

    void setOutros(const string& o) override {
        cout << "[Revista] setOutros() chamado com: " << o << endl;
        artigo = o;
    }

    string getTitulo() override {
        cout << "[Revista] getTitulo() chamado" << endl;
        return titulo;
    }

    string getAutor(int id) override {
        cout << "[Revista] getAutor(" << id << ") chamado" << endl;
        return autores;
    }

    string getArtigo() {
        cout << "[Revista] getArtigo() chamado" << endl;
        return artigo;
    }
};

#endif
