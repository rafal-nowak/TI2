#include "Fraction.h"
#include <iostream>
using std::ostream;
using std::istream;
using std::cout;
using std::endl;

long nwp(long p, long q) // najwiekszy wspólny podzielnik
{

  if (p < 0) { p = -p; }
  if (q < 0) { q = -q; }

  if (p == 0 && q == 0) return 1;
  if (p == 0) return q;
  if (q == 0) return p;

  while (p != q)
  {
    if (p > q) {
      p = p - q;
    }
    else {
      q = q - p;
    }
  }

  return p;
}

// Definicje wybranych funkcji
void Fraction::initFraction(long ll, long mm)
//
// Funkcja prywatna. Inicjuje sk³adowe l, m obiektu
// wed³ug argumentów ll, mm ;
// postaæ znormalizowana: nieskracalna, mianownik >=0.
{
  long d = nwp(ll, mm);
  if (mm < 0) { ll = -ll; mm = -mm; } // Mianownik zawsze nieujemny
  l = ll / d; m = mm / d;
}
// Operatory uwzglêdniaj¹ "wartoœci" 1/0, -1/0, 0/0
Fraction Fraction::add(cFraction& a)
{
  long tl, tm;
  if (m == 0 && a.m == 0) { tl = (l + a.l) / 2; tm = 0; }
  else { tl = l * a.m + m * a.l; tm = m * a.m; }
  return Fraction(tl, tm);
}
Fraction Fraction::sub(cFraction& a)
{
  long tl, tm;
  if (m == 0 && a.m == 0) { tl = (l - a.l) / 2; tm = 0; }
  else { tl = l * a.m - m * a.l; tm = m * a.m; }
  return Fraction(tl, tm);
}

void Fraction::show()
{
  cout << l;
  if (m != 1) cout << "/" << m;
}
