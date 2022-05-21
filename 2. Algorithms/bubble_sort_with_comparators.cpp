#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
  return a < b;
}

void bubble_sort(int a[], int size, bool (&compare)(int a, int b))
{
  for (int i = 1; i <= (size - 1); i++)
  {
    for (int j = 0; j <= (size - i - 1); j++)
    {
      if (compare(a[j], a[j + 1]))
      {
        swap(a[j], a[j + 1]);
      }
    }
  }
}
int main()
{
  int a[] = {1, 3, 2, 32, 4, 6, 7};
  int size = sizeof(a) / sizeof(int);
  bubble_sort(a, size, compare);

  for (int i = 0; i < size; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}