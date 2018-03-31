#include <Figure.h>

class Triangle : public Figure
{
  private:
    float _base;
    float _height;
    
  public:
    Triangle(float base, float height);
    float GetArea() const;
};

