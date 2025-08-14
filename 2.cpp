#include <algorithm>
#include <iostream>
#include <vector>

#include "dog.hpp"

using namespace std;

void puppy_namer(Dog dog)
{
  dog.set_name("Good boi");
}

int main()
{
  vector<Dog> dogs;
  dogs.insert(dogs.begin(), Dog());

  for (Dog dog : dogs)
  {
    cout << dog.get_name() << " ";
  }
  cout << endl;

  transform(dogs.begin(), dogs.end(), dogs, puppy_namer);

  for (Dog dog : dogs)
  {
    cout << dog.get_name() << " ";
  }
  cout << endl;

  return 0;
}
