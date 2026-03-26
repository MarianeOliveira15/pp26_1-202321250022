#include <iostream>
#include "Livro.h"
#include "Revista.h"
#include "ImplementadorBD.h"
#include "ImplementadorXML.h"
using namespace std;

int main() {

    ImplementadorBD bd;
    Livro livro(&bd);
    livro.obterDados();
    cout << "Titulo: " << livro.getTitulo() << endl;
    cout << "Autor:  " << livro.getAutor(0) << endl;
    cout << "ISBN:   " << livro.getISBN()   << endl;

    cout <<endl;

    ImplementadorXML xml;
    Revista revista(&xml);
    revista.obterDados();
    cout << "Titulo:  " << revista.getTitulo()  << endl;
    cout << "Autor:   " << revista.getAutor(0)  << endl;
    cout << "Artigo:  " << revista.getArtigo()  << endl;

    cout <<endl;

    Livro livroXML(&xml);
    livroXML.obterDados();

    cout << endl;

    return 0;
}