#include "ColouredRectangle.h"

ColouredRectangle::ColouredRectangle(string name, float a, float b, string colour)
  : Rectangle(name, a, b)
{
  m_colour = colour;
}

void ColouredRectangle::Info() const
{
  Rectangle::Info();
  cout << "Colour: " << m_colour << endl;
}
