#include "Square.h"

Square::Square(string name, float a)
  : Rectangle(name, a, a)
{

}

void Square::Info() const
{
  cout << "This is a special case of the rectangle: " << endl;
  cout << "Square: " << Name() << endl;
  cout << "Dimension: " << DimensionA() <<  endl;
  cout << "Area: " << Area() << endl;
  cout << "Perimeter: " << Perimeter() << endl;
}