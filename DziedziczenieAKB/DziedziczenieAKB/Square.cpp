#include "Square.h"

Square::Square(string name, float a) : Figure(name)
{
  m_a = a;
  m_area = m_a * m_a;
  m_perimeter = 4 * m_a;
}

float Square::Area() const
{
  return m_area;
}

float Square::Perimeter() const
{
  return m_perimeter;
}

void Square::Info() const
{
  cout << "Square: " << Name() << endl;
  cout << "Dimension: " << m_a << endl;
  cout << "Area: " << m_area << endl;
  cout << "Perimeter: " << m_perimeter << endl;
}