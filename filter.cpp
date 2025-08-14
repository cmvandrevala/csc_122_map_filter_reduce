#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
  // Initialize Vectors
  vector<int> from(10);
  vector<int> to;

  copy(from.begin(), from.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  copy(to.begin(), to.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  cout << endl;

  // Iota Function
  iota(from.begin(), from.end(), 0);

  copy(from.begin(), from.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  copy(to.begin(), to.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  cout << endl;

  // Copy With Back Inserter
  copy(from.begin(), from.end(), back_inserter(to));

  copy(from.begin(), from.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  copy(to.begin(), to.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  cout << endl;

  // C++ "Filter" Function
  copy_if(to.begin(), to.end(), ostream_iterator<int>(cout, " "), [](int x)
          { return x % 2 == 0; });
  cout << endl;
  copy_if(to.begin(), to.end(), ostream_iterator<int>(cout, " "), [](int x)
          { return x % 2 != 0; });
  cout << endl;
  cout << endl;

  copy(from.begin(), from.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  copy(to.begin(), to.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  cout << endl;
}
