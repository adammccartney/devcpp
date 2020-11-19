#include <iostream>
#include <string>

using namespace std;

int main()
{
  // C
  // char text [] = "sfghh";
  // char text [MAXLEN];

  // c++
  string text = "This is a text";
  cout << text << endl;

  int slen = text.length();

  for (int i = 0; i < slen; i++)
    cout << text[i] << '\t';
  cout << endl;

  // in C strcmp()
  if (text == "text")
    cout << "equal" << endl;
  else
    cout << "different" << endl;

  // Zweisung in C strcpy
  string nocheintext = text;
  cout << nocheintext << endl;

  // c++ understützt +, in C mussten wir strcat verwenden
  nocheintext += " Zusatz";
  cout << nocheintext << endl;

  // Search partstring, similar in C strstr
  cout << "Partialstring is from the position: " << text.find("tex") << endl;
  cout << "Character 'i' from position: " << text.find('i') << endl;

  // Extraxt substring
  cout << "Substring: " << text.substr(10, 4) << endl;

  // insert, doesn't exist in C
  text.insert(8, "not ");
  cout << "String after insert: " << text << endl;

  // erase, also not in C
  text.erase(8, 4);
  cout << "String after erase: " << text << endl;

}
