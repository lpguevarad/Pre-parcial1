#include <iostream>
#include <cmath>

double f(double x);

{
  return tan(x); 
}

int main ()

{
  double x(M_PI/2.0);
  std::cout << "tan (" << x << ") =" << f(x) << std::endl;

  return 0;
}
