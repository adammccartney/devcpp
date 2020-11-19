#include <iostream>
#include <string>

using namespace std;


/*
a german palindrome: reittier
an english one: redivider
*/

bool palindrome(string text)
{
  bool is_palindrome = true;
  for (int i = 0; i < (int)text.length() / 2; i++)
    {
      int r_index = text.length() - i - 1;
      if (text[i] != text[r_index])
        is_palindrome = false;
    }
  return is_palindrome;
}

int main()
{
  cout << "Input text: ";
  string input;
  cin >> input;

  if (palindrome(input))
    cout << "OK" << endl;
  else
    cout << "NOK" << endl;
}
