#include <string>

class Dog
{
private:
  std::string name;

public:
  std::string speak();
  std::string get_name();
  void set_name(std::string name);
};
