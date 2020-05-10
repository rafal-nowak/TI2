// PrzeciazanieOperatorow1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Fraction.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define P(x) cout <<#x" = " <<(x)<<endl // Makro do wydruków

int main()
{
  Fraction f0, f1(1, 2), f2(2, 3), f3(3, 4);

  P(f0); // f0 = 0
  P(f1); // f1 = 1/2
  P(f2); // f2 = 2/3
  P(f3); // f3 = 3/4
  P((f1 + f2) / (f3 - f1)); // (f1+f2)/(f3 -f1) = 14/3
  P(1 / f3 + 1 / f2); // 1/f3 + 1/f2 = 17/6
  P(12 / f0 + -12 / f0); // 12/ f0 + -12/f0 = 0/0
  P(12 / f0); // 12/ f0 = 1/0
  P(-12 / f0); // -12/f0 = -1/0
  P(3.0 * f3 / f2); // 3.0*f3/f2 = 27/8
  //cout << "koniec" << endl;

  Fraction ff;
  cout << "wprowadz ulamek: ";
  cin >> ff;
  cout << "wprowadzony przez Ciebie ulamek to: " << ff << endl;

  return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
