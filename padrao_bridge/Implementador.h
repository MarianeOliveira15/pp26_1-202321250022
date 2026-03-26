#ifndef IMPLEMENTADOR_H
#define IMPLEMENTADOR_H

// Forward declaration para evitar dependencia circular
class Publicacao;

// Interface Implementador — lado direito do Bridge
class Implementador {
public:
    virtual void getDados(Publicacao* tipo) = 0;
    virtual ~Implementador() {}
};

#endif
