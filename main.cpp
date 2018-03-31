#include <iostream>

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main() 
{

    Square _mySquare(5);
    Triangle _myTriangle(5, 10);
    Circle _myCircle(10);
    cout << "Square area: " << _mySquare.GetArea() << endl;
    cout << "Triangle area: " << _myTriangle.GetArea() << endl;
    cout << "Circle area: " << _myCircle.GetArea() << endl;
    cin.get();
    return 0;
}

