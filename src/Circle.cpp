#include<cmath>
#include"Circle.h"

# define M_PI 3.14159265358979323846f /* pi */

Circle::Circle(float radious) : _radious(radious)
{
    
}

float Circle::GetArea() const
{
    return _radious * _radious * M_PI;
}