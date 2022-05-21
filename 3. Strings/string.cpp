#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
  // Initialization of the string
  string s0;
  string s1("Hello");
  string s2 = "Hello";
  string s3(s2);

  char a[] = {'a', 'b', 'c', 'd', '\0'};
  string s4(a);

  cout << s0 << endl;
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;

  // Useful Functions

  // checking the string is empty
  if (s0.empty())
  {
    cout << "s0 is an Empty function" << endl;
  }

  // Appending to the string
  s0.append("C++ is a Luv");
  cout << s0 << endl;

  s0 += " and Javascript";
  cout << s0 << endl;

  // Erasing the contents from the string
  cout << s0.length() << " : Before Erasing " << endl;
  s0.erase();
  cout << s0.length() << " : After Erasing " << endl;

  // Compare two strings -> Returns ==0 ,>0 or <0
  cout << s0.compare(s1) << endl;

  // Overloading
  if (s0 > s1)
  {
    cout << "s0 is lexicographically greater than s1" << endl;
  }
  else
  {
    cout << "s0 is lexicographically smaller than s1" << endl;
  }

  // Find Substring
  string s6 = "I Love eating apples in the morning";
  int idx = s6.find(" the");
  cout << "Index found : " << idx << endl;

  // Remove the word from the string
  string word = " the";
  int x = word.length();
  s6.erase(idx, x);
  cout << s6 << endl;

  // Iterate over all the characters over the string
  for (int i = 0; i < s6.length(); i++)
  {
    cout << s6[i] << " ";
  }
  cout << endl;

  // Iterators
  for (string::iterator it = s6.begin(); it != s6.end(); it++) // auto --> string::iterator
  {
    cout << (*it) << ", ";
  }
  cout << endl;

  // For each loop
  for (auto c : s2) // auto --> char
  {
    cout << c << " ";
  }
  cout << endl;
  return 0;
}