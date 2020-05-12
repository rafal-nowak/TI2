#pragma once
#include <string>
#include <iostream>
#include "Rectangle.h"

class ColouredRectangle : public Rectangle
{
private:
  string m_colour;
public:
  ColouredRectangle(string name = "", float a = 0, float b = 0, string colour = "");
  void Info() const;
};

