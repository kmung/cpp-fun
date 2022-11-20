#ifndef MAIN_SAVITCH_H
#define MAIN_SAVITCH_H
#include <cstdlib> // provides size_t

namespace main_savitch_3 {
  class sequence {
  public:
    typedef double value_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 30;

    // Constructor
    sequence();

    //Modification member functions
    void start();
    void advance();
    void insert(const value_type& entry);
    void attach(const value_type& entry);
    void remove_current();

    // Constant member functions
    size_type size() const;
    bool is_item() const;
    value_type current() const;

  private:
    value_type data[CAPACITY];
    size_type used;
    size_type current_index;
  };
}
#endif
