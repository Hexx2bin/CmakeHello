#include "Square.h"

Square::Square(float sideLength):_side(sideLength)
{

}

float Square::GetArea() const
{
    return _side*_side;
}