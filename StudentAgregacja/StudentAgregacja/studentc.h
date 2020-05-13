#pragma once
#include <iostream>
#include <string>
#include <valarray>
class Student
{
private:
  typedef std::valarray<double> ArrayDb;
  std::string name; // obiekt zawierany
  ArrayDb scores; // obiekt zawierany
  // prywatna metoda do wyœwietlania wyników
  std::ostream& arr_out(std::ostream& os) const;
public:
  Student() : name("Brak"), scores() {}
  explicit Student(const std::string& s)
    : name(s), scores() {}
  explicit Student(int n) : name("Brak"), scores(n) {}
  Student(const std::string& s, int n)
    : name(s), scores(n) {}
  Student(const std::string& s, const ArrayDb& a)
    : name(s), scores(a) {}
  Student(const char* str, const double* pd, int n)
    : name(str), scores(pd, n) {}
  ~Student() {}
  double Average() const;
  const std::string& Name() const;
  double& operator[](int i);
  double operator[](int i) const;
  // funkcje zaprzyjaŸnione
  // wejœcie
  friend std::istream& operator>>(std::istream& is,
    Student& stu); // 1 s³owo
  friend std::istream& getline(std::istream& is,
    Student& stu); // 1 linia
// wyjœcie
  friend std::ostream& operator<<(std::ostream& os,
    const Student& stu);
};

