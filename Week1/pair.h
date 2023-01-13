// An example of pair Class
// Can use more than one type (eg. char and int)
template<typename FirstT, typename SecondT> class pair { 
  public:
    pair(FirstT first_val, SecondT second_val);
    void set_first(FirstT first_val);
    void set_second(SecondT second_val);

    First get_first() const;
    SecondT get_second() const;

  private:
    FirstT first;
    SecondT second;
};
