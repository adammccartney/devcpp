#include <iostream>
#include <string>

using namespace std;

string splitgreatest(string text)
{
  string word;
  string longest = "";
  int begin = 0;
  int end = 0;

  while (end != (int)string::npos)
    {
      // Determine index for the first occurence of space
      end = text.find(' ', begin);
      word = text.substr(begin, end - begin);
      if (word.length() > longest.length())
        longest = word;
      cout << word << endl;
      begin = end + 1;
    }
  return longest;
}

int main()
{
  string text = "This is a text for further examples";
  string longest = splitgreatest(text);
  cout << "Longest word: " << longest << endl;
}
