#include "Retangulo.h"

Retangulo::Retangulo(float x, float y, float largura, float altura){

    createPoligono(x,y);
    createPoligono(x,y-altura);
    createPoligono(x+largura, y-altura);
    createPoligono(x+largura, y);


}

