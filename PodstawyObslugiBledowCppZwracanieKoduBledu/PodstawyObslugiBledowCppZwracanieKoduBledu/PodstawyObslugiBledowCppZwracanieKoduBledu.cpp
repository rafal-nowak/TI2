#include <iostream>
#include <cfloat> // (lub float.h) dla DBL_MAX

bool hmean(double a, double b, double* ans);

int main()
{
  setlocale(LC_ALL, "");
  double x, y, z;

  std::cout << "Podaj dwie liczby: ";
  while (std::cin >> x >> y)
  {
    if (hmean(x, y, &z))
      std::cout << "Średnia harmoniczna liczb " << x << " i " << y
      << " wynosi " << z << std::endl;
    else
      std::cout << "Suma liczb nie może wynosić 0 -"
      << " spróbuj jeszcze raz.\n";
    std::cout << "Podaj kolejną parę liczb <w, aby wyjść>: ";
  }
  std::cout << "Koniec\n";
  return 0;
}

bool hmean(double a, double b, double* ans)
{
  if (a == -b)
  {
    *ans = DBL_MAX;
    return false;
  }
  else
  {
    *ans = 2.0 * a * b / (a + b);
    return true;
  }
}
