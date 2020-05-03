#include <iostream>
#include "Point.h"

Point::Point() {
  //std::cout << "Wywolano konstruktor domyslny\n";
  m_name = "bez nazwy";
  m_x = 0;
  m_y = 0;
}

Point::Point(const std::string& name, double x, double y) {
  //std::cout << "Wywolano konstruktor z argumentem " << name << std::endl;
  m_name = name;
  m_x = x;
  m_y = y;
}

Point::~Point() {
  //std::cout << "Likwiduje " << m_name << std::endl;
}

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

void Point::show() const {
  std::cout << "Point: " << m_name << "(" << m_x << ", " << m_y << ")" << std::endl;
}

double Point::distance(const Point& p) const {
  return sqrt( (p.m_x - m_x) * (p.m_x - m_x) + (p.m_y - m_y) * (p.m_y - m_y) );
}

const Point& Point::distant(const Point& p) const {
  double d = sqrt( m_x * m_x + m_y * m_y);
  double dp = sqrt(p.m_x * p.m_x + p.m_y * p.m_y);

  if (d > dp)
    return *this;

  return p;
}