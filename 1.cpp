#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int multiply(int x)
{
  return 2 * x;
}

int main()
{
  int my_array[] = {1, 2, 3, 4, 5};
  int n = sizeof(my_array) / sizeof(my_array[0]);

  transform(my_array, my_array + n, my_array, multiply);

  for (int i = 0; i < n; i++)
  {
    cout << my_array[i] << " ";
  }
  cout << endl;

  return 0;
}
