#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Rectangle
{
private:
  string m_name;
  float m_a;
  float m_b;
  float m_area;
  float m_perimeter;

protected:
  float DimensionA() const;
  float DimensionB() const;
  string Name() const;
public:
  Rectangle(string name = "", float a = 0, float b = 0);
  virtual ~Rectangle() {}
  float Area() const;
  float Perimeter() const;
  virtual void Info() const;
};

