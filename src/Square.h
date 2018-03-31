#include <Figure.h>

class Square: public Figure
{
private:
    float _side;

public:
    Square(float sideLength);
    float GetArea() const;
};