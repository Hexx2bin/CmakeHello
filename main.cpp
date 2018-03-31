#include <iostream>
#include <Square.h>

using namespace std;

int main() 
{
    Square _mySquare(5);
    cout << "Area: " << _mySquare.GetArea() << endl;
    cin.get();
    return 0;
}

