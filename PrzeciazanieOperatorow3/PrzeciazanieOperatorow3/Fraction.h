#pragma once
#include <iostream>

long nwp(long p, long q); // najwiekszy wspólny podzielnik

class Fraction;
typedef const Fraction cFraction; // Skrót notacyjny

class Fraction
{
  long l;
  unsigned long m; // Mianownik nieujemny
  void initFraction(long a, long b);
public:
  Fraction(long ll = 0, long mm = 1L) // Konstruktor (3 wersje )
  {
    initFraction(ll, mm);
  }
  long licznik() const { return l; }
  long mianownik() const { return m; }
  friend Fraction operator+(cFraction& a, cFraction& b);
  friend Fraction operator-(cFraction& a, cFraction& b);
  friend Fraction operator*(cFraction& a, cFraction& b);
  friend Fraction operator/(cFraction& a, cFraction& b);
  // ...
  friend bool operator<(cFraction& a, cFraction& b);
  friend bool operator>(cFraction& a, cFraction& b);
  friend bool operator<=(cFraction& a, cFraction& b);
  friend bool operator>=(cFraction& a, cFraction& b);
  friend bool operator==(cFraction& a, cFraction& b);
  friend bool operator!=(cFraction& a, cFraction& b);
  void show();
};

