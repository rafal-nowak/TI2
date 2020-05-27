#include <iostream>
#include <cmath>
#include <exception>
#include "exc_mean.h"
// prototypy funkcji
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
  setlocale(LC_ALL, "");
  using std::cout;
  using std::cin;
  using std::endl;

  double x, y, z;

  cout << "Podaj dwie liczby: ";
  while (cin >> x >> y)
  {
    try {      // początek bloku try
      z = hmean(x, y);
      cout << "Średnia harmoniczna liczb " << x << " i " << y
        << " wynosi " << z << endl;
      cout << "Średnia geometryczna liczb " << x << " i " << y
        << " wynosi " << gmean(x, y) << endl;
      cout << "Podaj kolejną parę liczb <w, aby wyjść>: ";
    }   // koniec bloku try
    catch (std::exception &e)   // początek bloku catch
    {
      cout << e.what() << endl;
      continue;
    }                           // koniec bloku catch
  }
  cout << "Koniec\n";
  return 0;
}

double hmean(double a, double b)
{
  if (a == -b)
    throw bad_hmean();
  return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
  if (a < 0 || b < 0)
    throw bad_gmean();
  return std::sqrt(a * b);
}
