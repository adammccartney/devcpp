#include <iostream>
// C bibliothek wird verwendet, weil c++ keine eigene Mathematik-bibliothek hat
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
  cout << "Input Radius: ";
  double radius;
  cin >> radius;

  double volume = pow(radius, 3) * M_PI * 4 / 3;
  cout << "Volume: " << volume << endl;
  return 0;
}
