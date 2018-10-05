#include "Poligono.h"
#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono(){
}

void Poligono::createPoligono(float _X, float _Y){
    Point p;
    p.setXY(_X, _Y);
    poli[pos] = p;

    pos++;

    //cont++;



    //bool control = false;

    //float a,b;
//    Point p;
//    cout<<"-------- Criacao de poligono -------\n";
//    cout<<"entre com (00)para sair\n";
//    while (control = true || cont<100){
//        cout<<"Entre com a coordenada X: ";
//        cin>>a;
//        cout<<"Entre com a coordenada Y: ";
//        cin>>b;
//        if(a==00 || b==00){
//            if(cont<3){
//                cout<<"Impossivel criar o poligono!";
//                exit(0);
//            }

//            cout<<"Poligono criado com sucesso!";
//            control = true;
//            for(int i=0; i<cont; i++){
//                poli[i].imprime();
//            }
//            //exit(0);
//            break;
//        }
//        p.setXY(a,b);
//        poli[cont] = p;
//        cont++;
//    }


    //nVertice = cont;
}

int Poligono::getVertice(void){
    return sizeof(poli);
}

float Poligono::areaPoligono(void){
     int i;
     float resultPrinc=0;
     float resultSecun=0;
     poli[pos] = poli[0];
     for(i=0;i<pos;i++){
        resultPrinc = resultPrinc + (poli[i].getX() * poli[i+1].getY());
        resultSecun = resultSecun + (poli[i].getY() * poli[i+1].getX());
     }

     return abs(resultSecun - resultPrinc)/2;

}

void Poligono::transladaPoligono(float x, float y){
    int i;
    for(i=0;i<pos;i++){
        poli[i].translada(x,y);
        poli[i].imprime();
    }
}

void Poligono::imprimePoligono(){
    int i;
    //poli[nVertice] = poli[0];
    for(i=0;i<pos;i++){
        poli[i].imprime();
        if(i!=pos-1){
            cout<< "->";
        }
    }
}


