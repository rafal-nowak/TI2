// use_stuc.cpp -- korzystanie z klasy używającej zawierania
// kompilacja razem z plikiem studentc.cpp
#include <iostream>
#include "studentc.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student& sa, int n);

const int pupils = 3;
const int quizzes = 5;

int main()
{
  setlocale(LC_ALL, "pl_PL");

  Student ada[pupils] =
  { Student(quizzes), Student(quizzes), Student(quizzes) };

  int i;
  for (i = 0; i < pupils; ++i)
    set(ada[i], quizzes);
  cout << "\nLista studentów:\n";
  for (i = 0; i < pupils; ++i)
    cout << ada[i].Name() << endl;
  cout << "\nWyniki:";
  for (i = 0; i < pupils; ++i)
  {
    cout << endl << ada[i];
    cout << "średnia: " << ada[i].Average() << endl;
  }
  cout << "Gotowe.\n";
  return 0;
}

void set(Student& sa, int n)
{
  cout << "Podaj imię i nazwisko studenta: ";
  getline(cin, sa);
  cout << "Podaj " << n << " wyników testów:\n";
  for (int i = 0; i < n; i++)
    cin >> sa[i];
  while (cin.get() != '\n')
    continue;
}

