#include <iostream>
#include <iomanip>

using namespace std;

void fibonacci(int gen)
{
  long last = 0;
  long penultimate = 1;
  long count = 0;

  for (int i = 0; i < gen; ++i)
    {
      count = last + penultimate;
      cout << "Generation: " << i << " Count: " << count << endl;
      penultimate = last;
      last = count;
    }
}

int main()
{
  int generations;
  cout << "Number of generations: ";
  cin >> generations;

  fibonacci(generations);

  return 0;
}
