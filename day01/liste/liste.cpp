#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  srand(time(0));
  for (int i = 0; i < 10; i++)
    {
      // zufallsgenerator
      int zufall = rand() % 100;
      cout << "Tag : " << setw(10) << setfill('.') << left <<  i + 1 << setw(5) << setfill(' ') << right << zufall << endl;
    }
  return 0;
}
