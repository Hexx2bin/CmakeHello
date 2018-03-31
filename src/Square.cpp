#include "Square.h"

Square::Square(int sideLength):_side(sideLength)
{

}

int Square::GetArea() const
{
    return _side*_side;
}