#include "Rectangle.h"


Rectangle::Rectangle(string name, float a, float b)
{
  m_name = name;
  m_a = a;
  m_b = b;
  m_area = m_a * m_b;
  m_perimeter = 2 * m_a + 2 * m_b;
}

float Rectangle::Area() const
{
  return m_area;
}

float Rectangle::Perimeter() const
{
  return m_perimeter;
}

float Rectangle::DimensionA() const
{
  return m_a;
}

float Rectangle::DimensionB() const
{
  return m_b;
}

string Rectangle::Name() const
{
  return m_name;
}

void Rectangle::Info() const
{
  cout << "Rectangle: " << m_name << endl;
  cout << "Dimensions: " << m_a << " x " << m_b << endl;
  cout << "Area: " << m_area << endl;
  cout << "Perimeter: " << m_perimeter << endl;
}


