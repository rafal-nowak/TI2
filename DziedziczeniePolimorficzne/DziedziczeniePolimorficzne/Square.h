#pragma once
#include "Rectangle.h"

using std::string;
using std::cout;
using std::endl;

class Square : public Rectangle
{
private:

protected:
 
public:
  Square(string name = "", float a = 0);
  virtual ~Square() {}
  virtual void Info() const;
};