#pragma once
#include "Figure.h"

class Square : public Figure
{
private:
  float m_a;
  float m_area;
  float m_perimeter;

public:
  Square(string name = "", float a = 0);
  virtual ~Square() {}
  virtual float Area() const;
  virtual float Perimeter() const;
  virtual void Info() const;
};