#include <Figure.h>

class Circle : public Figure
{
  private:
    float _radious;
    
  public:
    Circle(float radious);  
    float GetArea() const;
};