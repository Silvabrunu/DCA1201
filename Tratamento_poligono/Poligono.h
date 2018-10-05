#ifndef POLIGONO_H
#define POLIGONO_H
#include "Point.h"


class Poligono{
private:
    //int nVertice;
    int pos=0;
    Point poli[100];
public:
    Poligono(void);

    //void createPoligono(void);
    void createPoligono(float _X, float _Y);
    int getVertice(void);
    float areaPoligono(void);

    void transladaPoligono(float x, float y);

    void imprimePoligono(void);
};

#endif // POLIGONO_H
