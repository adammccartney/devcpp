#include <iostream>
#include <iomanip>

using namespace std;

/*
  number = sum of all divisors except self
  28 = 1 + 2 + 4 + 7 + 14 => True
  Sum of the divisors not eqal => False

  if (zahl % teiler == 0) => Divisible

 */
bool perfect(int num)
{
  int sum = 0;
  for (int divisor = 1; divisor < num; divisor++)
    {
      if (num % divisor == 0)
          sum += divisor;
    }
  if (sum == num)
    return true;
  else
    return false;
}

int main()
{
  int number;
  cout << "Number: ";
  cin >> number;

  if(perfect(number))
    cout << "Number is perfect" << endl;
  else
    cout << "Number is not perfect" << endl;

  return 0;
}
