#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "Hello world!" << endl;

  int zahl = 0;

  cout << "Eingabe Zahl: ";

  cin >> zahl;
  cout << "Zahl ist: " << zahl << endl;
  cout << "Zahl ist " << setw(9) << setfill('.') << left << zahl << endl;

  float pi = 3.14159;
  cout << "Pi: " << fixed << setprecision(2) << pi << endl;

  zahl = -1;
  cout << "Zahl eingeben: ";
  while (!(cin >> zahl))
    {
      // Fehler-bit loeschen
      cin.clear();
      // Loeschen
      cin.ignore();
      cout << "Falsche Eingabe, nur Zahlen erlaubt" << endl;
    }
  cout << "Zahl: " << zahl;
  return 0;

}
