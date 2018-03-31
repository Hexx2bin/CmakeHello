#include "Triangle.h"

Triangle::Triangle(float base, float height) :_base(base), _height(height) 
{
    
}

float Triangle::GetArea() const 
{
    return (_base*_height)/2;
}