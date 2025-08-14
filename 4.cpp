
int main()
{
  template <typename to_type, typename from_type>
  std::list<to_type> convert_list(const std::list<from_type> &from_list)
  {
    std::list<to_type> to_list{from_list.size()};
    std::transform(from_list.cbegin(), from_list.cend(), to_list.begin(), [](const from_type &value)
                   { return convert<to_type>(value); });
    return to_list;
  }
}
