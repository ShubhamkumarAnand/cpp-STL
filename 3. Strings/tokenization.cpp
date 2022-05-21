#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
  char ch[] = "Hello, Everyone ! Have a nice day";
  char *ptr = strtok(ch, " ");
  cout << ptr << endl;

  while (ptr != NULL)
  {
    ptr = strtok(NULL, " ");
    cout << ptr << endl;
  }

  return 0;
}