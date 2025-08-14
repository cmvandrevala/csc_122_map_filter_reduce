#include "dog.hpp"

std::string Dog::speak()
{
  return "Woo!";
}

std::string Dog::get_name()
{
  return this->name;
}

void Dog::set_name(std::string name)
{
  this->name = name;
}
