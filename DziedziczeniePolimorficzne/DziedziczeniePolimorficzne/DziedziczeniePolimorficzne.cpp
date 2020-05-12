// DziedziczeniePolimorficzne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Rectangle.h"
#include "Square.h"

int main()
{
  Rectangle R1("R1", 2.0, 3.0);
  Rectangle R2("R2", 3.0, 4.0);
  Rectangle R3;
  Square S1("S1", 5.0);

  R1.Info();
  std::cout << std::endl;
  R2.Info();
  std::cout << std::endl;
  R3.Info();
  std::cout << std::endl;
  S1.Info();

  std::cout << "Wykorzystanie wskaźnika" << std::endl;
  Square* pointer_s = &S1;
  Rectangle* pointer_r = &S1;
  std::cout << std::endl;
  pointer_s->Info();
  std::cout << std::endl;
  pointer_r->Info();

  std::cout << "Wykorzystanie referencji" << std::endl;
  Square& ref_s = S1;
  Rectangle& ref_r = S1;
  std::cout << std::endl;
  ref_s.Info();
  std::cout << std::endl;
  ref_r.Info();

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
