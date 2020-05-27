#pragma once
#include <exception>

class bad_hmean : public std::exception
{
public:
  //const char* what() { return "Niepoprawne argumenty funkcji hmean()"; }
  const char* what() const throw() { return "Niepoprawne argumenty funkcji hmean()"; }
};

class bad_gmean : public std::exception
{
public:
  //const char* what() { return "Niepoprawne argumenty funkcji gmean()"; }
  const char* what() const throw() { return "Niepoprawne argumenty funkcji gmean()"; }
};
