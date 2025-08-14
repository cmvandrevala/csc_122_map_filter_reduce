#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
  vector<int> v = {1, 3, 4};

  int sum_a = reduce(v.begin(), v.end(), 0);
  cout << "Sum A: " << sum_a << endl;

  int sum_b = reduce(v.begin(), v.end(), 10);
  cout << "Sum B: " << sum_b << endl;

  int sum_c = reduce(v.begin(), v.end());
  cout << "Sum C: " << sum_c << endl;
}
