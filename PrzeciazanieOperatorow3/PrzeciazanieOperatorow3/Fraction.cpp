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
Fraction operator+(cFraction& a, cFraction& b)
{
  long tl, tm;
  if (a.m == 0 && b.m == 0) { tl = (a.l + b.l) / 2; tm = 0; }
  else { tl = a.l * b.m + a.m * b.l; tm = a.m * b.m; }
  return Fraction(tl, tm);
}
Fraction operator-(cFraction& a, cFraction& b)
{
  long tl, tm;
  if (a.m == 0 && b.m == 0) { tl = (a.l - b.l) / 2; tm = 0; }
  else { tl = a.l * b.m - a.m * b.l; tm = a.m * b.m; }
  return Fraction(tl, tm);
}
Fraction operator*(cFraction& a, cFraction& b)
{
  long d1, d2;
  d1 = nwp(a.l, b.m); // Podzielniki wzajemne a i b
  d2 = nwp(a.m, b.l);
  return Fraction((a.l / d1) * (b.l / d2), (a.m / d2) * (b.m / d1));
}
Fraction operator/(cFraction& a, cFraction& b)
{
  long tl, tm;
  if (a.m == 0 && b.m == 0) {
    tl = (a.l - b.l) / 2;
    tm = 0;
    return Fraction(tl, tm);
  }


  long d1, d2;
  d1 = nwp(a.l, b.l); // Podzielniki wzajemne a i b
  d2 = nwp(a.m, b.m);
  return Fraction((a.l / d1) * (b.m / d2), (a.m / d2) * (b.l / d1));
}
// Wybrane operatory relacji
bool operator< (cFraction& a, cFraction& b) { return (a - b).l < 0; }
bool operator>=(cFraction& a, cFraction& b) { return !(a < b); }
bool operator==(cFraction& a, cFraction& b) { return (a - b).l == 0; }
bool operator!=(cFraction& a, cFraction& b) { return !(a == b); }
void Fraction::show()
{
  cout << l;
  if (m != 1) cout << "/" << m;
}