#include <iostream>
#include "Point.h"
#include "Poligono.h"
#include "Retangulo.h"

using namespace std;

int main(){
//    Point p1,p2,p3, p4;
//    float p5;
//    p1.setX(3);
//    p1.setY(4);

//    p2.setXY(8,9);

//    p3 = p1.add(p2);
//    p4 = p2.sub(p1);

//    p5 = p1.norma();


//    p1.imprime();
//    p2.imprime();
//    p3.imprime();
//    p4.imprime();
//    cout << p5 << endl;
//    p1.translada(2,3);
//    p1.imprime();
    //Poligono p;
    //p.createPoligono();

    Retangulo r(1,2,4,1);

    //cout<<p.getVertice()<<"\n";
    //cout<< p.areaPoligono()<<"\n";
    //p.transladaPoligono(2,3);
    r.imprimePoligono();


    return 0;
}
