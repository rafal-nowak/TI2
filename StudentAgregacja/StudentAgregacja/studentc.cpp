// studentc.cpp -- klasa Student uøywajπca zawierania
#include "studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// metody publiczne
double Student::Average() const
{
  if (scores.size() > 0)
    return scores.sum() / scores.size();
  else
    return 0;
}

const string& Student::Name() const
{
  return name;
}

double& Student::operator[](int i)
{
  return scores[i]; // uøywa funkcji valarray<double>::operator[]()
}

double Student::operator[](int i) const
{
  return scores[i];
}

// metoda prywatna
ostream& Student::arr_out(ostream& os) const
{
  int i;
  int lim = scores.size();
  if (lim > 0)
  {
    for (i = 0; i < lim; i++)
    {
      os << scores[i] << " ";
      if (i % 5 == 4)
        os << endl;
    }
    if (i % 5 != 0)
      os << endl;
  }
  else
    os << " tablica jest pusta ";
  return os;
}

// funkcje zaprzyjaünione

// uøywa funkcji operator>>() klasy string
istream& operator>>(istream& is, Student& stu)
{
  is >> stu.name;
  return is;
}

// uøywa funkcji getline(ostream &, const string &) zaprzyjaünionej z klasπ string
istream& getline(istream& is, Student& stu)
{
  std::getline(is, stu.name);
  return is;
}

// uøywa funkcji operator<<() klasy string
ostream& operator<<(ostream& os, const Student& stu)
{
  os << "Wyniki " << stu.name << ":\n";
  stu.arr_out(os); // uøywa prywatnej metody do wyúwietlania wynikÛw
  return os;
}