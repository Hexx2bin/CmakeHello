#include<cmath>
#include"Circle.h"

Circle::Circle(float radious) : _radious(radious)
{
    
}

float Circle::GetArea() const
{
    return _radious * _radious * M_PI;
}