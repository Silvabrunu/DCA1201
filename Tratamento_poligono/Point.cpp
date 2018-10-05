#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point(float _X, float _Y){
    X = _X;
    Y = _Y;
}

// get e set para o X
void Point::setX(float _X){
    X = _X;
}
float Point::getX(void){
  return X;
}

// get e set para o Y
void Point::setY(float _Y){
    Y = _Y;
}
float Point::getY(void){
  return Y;
}

void Point::setXY(float _X, float _Y){
    X = _X;
    Y = _Y;
}

Point Point::add(Point p1){
    Point res;
    res.X = X + p1.X;
    res.Y = Y + p1.Y;

    return res;
}

Point Point::sub(Point p1){
    Point res;
    res.X = X - p1.X;
    res.Y = Y - p1.Y;

    return res;
}

float Point::norma(){
    float nor;
    nor = sqrt(X*X + Y*Y);
    return nor;
}

void Point::translada(float a, float b){
    X = X + a;
    Y = Y + b;
}

void Point::imprime(void){
    cout << "(" << X << "," << Y << ") ";
}


