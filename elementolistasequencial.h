#ifndef ELEMENTOLISTASEQUENCIAL_H
#define ELEMENTOLISTASEQUENCIAL_H

#include "precompiledHeader.h"


enum ElementoShape { NoShape, ZShape, SShape, LineShape, TShape, SquareShape,
                   LShape, MirroredLShape };

class elementolistasequencial
{
public:
    elementolistasequencial() { setShape(SquareShape); }

    void setShape(ElementoShape shape);


 //   int getValue() const { return value; }
 //   void setValue(int newValue) { value = newValue; }


    ElementoShape shape() const { return elementoShape; }
    int x(int index) const { return coords[index][0]; }
    int y(int index) const { return coords[index][1]; }



private:
    void setX(int index, int x) { coords[index][0] = x; }
    void setY(int index, int y) { coords[index][1] = y; }

    ElementoShape elementoShape;
    int coords[4][2];
};

#endif // ELEMENTOLISTASEQUENCIAL_H
