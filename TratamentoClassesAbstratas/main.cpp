#include <iostream>
#include <fstream>
#include "screen.h"
#include "retangulo.h"
#include "reta.h"
#include "circulo.h"
#include <string>
#include <sstream>
#include <list>


using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    //Screen tela;
    Screen t;
    //String
    string s;
    fin.open("C:/Users/LAB25-BOLSISTA/Documents/Bruno/TratamentoClassesAbstratas/instrucoes.txt");
    if(fin.is_open()){
            cout << "Arquivo de entrada aberto com sucesso" << endl;
        }else{
            cout << "Ocorreu um erro ao tentar abrir o arquivo de entrada"<<endl;
    }

    fout.open("C:/Users/LAB25-BOLSISTA/Documents/Bruno/TratamentoClassesAbstratas/figura.txt");
    if(fout.is_open()){
            cout << "Arquivo de saida aberto com sucesso" << endl;
        }else{
            cout << "Ocorreu um erro ao tentar abrir o arquivo de saída"<<endl;
    }

    list <FiguraGeometrica*>::iterator li;
    list <FiguraGeometrica*> figuras;

    while(fin.good()){

        getline(fin, s);

        if(fin.good()){
            string cmd;
            stringstream sstream(s);
            sstream >> cmd;

            if(cmd.compare("dim")==0){
                int x, y;
                sstream >> x >> y;
                t.setScreen(x,y);
            }

            if(cmd.compare("Reta")==0){
                int x0, y0, xf,yf;
                char brush;
                sstream >> x0 >>y0 >> xf >> yf >> brush;
                figuras.push_back(new Reta(x0,y0,xf,yf,brush));
            }

            if(cmd.compare("Retangulo")==0){
                int x0, y0, largura,altura;
                bool fillmode;
                char brush;
                sstream >> x0 >>y0 >> largura >> altura >>fillmode >> brush;
                figuras.push_back(new Retangulo(x0,y0,largura,altura,fillmode,brush));
            }

            if(cmd.compare("Circulo")==0){
                int x0, y0, raio;
                bool fillmode;
                char brush;
                sstream >> x0 >>y0 >> raio >> fillmode >> brush;
                figuras.push_back(new Circulo(x0,y0,raio,fillmode,brush));
            }
        }
    }

    for(li = figuras.begin(); li!=figuras.end(); li++){
        (*li)->draw(t);
    }

    fout <<t;
    return 0;
}


