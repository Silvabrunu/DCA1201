#ifndef POINT_H
#define POINT_H


class Point{
private:
    float X;
    float Y;
public:
    Point(float _X=0, float _Y=0);

    void setX(float _X);
    float getX(void);

    void setY(float _Y);
    float getY(void);

    void setXY(float _X, float _Y);

    Point add(Point p1);
    Point sub(Point p1);
    float norma();

    void translada(float a, float b);
    void imprime();




};

#endif // POINT_H
