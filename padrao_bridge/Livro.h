#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include "Publicacao.h"
using namespace std;


class Livro : public Publicacao {
private:
    string isbn;

public:
    Livro(Implementador* imp) : Publicacao(imp) {}

    void setTitulo(const string& t) override {
        cout << "[Livro] setTitulo() chamado com: " << t << endl;
        titulo = t;
    }

    void setAutores(const string& a) override {
        cout << "[Livro] setAutores() chamado com: " << a << endl;
        autores = a;
    }

    void setOutros(const string& o) override {
        cout << "[Livro] setOutros() chamado com: " << o << endl;
        isbn = o;
    }

    string getTitulo() override {
        cout << "[Livro] getTitulo() chamado" << endl;
        return titulo;
    }

    string getAutor(int id) override {
        cout << "[Livro] getAutor(" << id << ") chamado" << endl;
        return autores;
    }

    string getISBN() {
        cout << "[Livro] getISBN() chamado" << endl;
        return isbn;
    }
};

#endif
