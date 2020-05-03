#include <iostream>
#include "Point.h"

void Point::setName(const std::string& name) {
  m_name = name;
}

void Point::setXY(double x, double y) {
  m_x = x;
  m_y = y;
}

double Point::getX() {
  return m_x;
}

double Point::getY() {
  return m_y;
}

void Point::show() {
  std::cout << "Point: " << m_name << "(" << m_x << ", " << m_y << ")" << std::endl;
}