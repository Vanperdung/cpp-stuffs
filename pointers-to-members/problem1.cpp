#include <iostream>

class String
{
public:
    const char* (*d_sp)();
    const char* get() const;
    const char* set();
};

inline const char* String::get() const
{

}

inline const char* String::set()
{

}

const char* foo()
{

}

int main(void)
{
    String s;

    // Error
    /*
    *   d_sp is a pointer has global scope, while the function member set() has scope inside the String class.
    *   The fact that d_sp is a data member of String class is irrelevant here. It can pointsto a function living somewhere outside of the class.
    */
    s.d_sp = &(String::set);
    
    // OK
    s.d_sp = foo;

    return 0;
}