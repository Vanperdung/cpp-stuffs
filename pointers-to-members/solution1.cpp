#include <iostream>

class String
{
public:

    // To make d_sp point to a member function, prefixing the String:: the d_sp pointer.
    // String:: prefix will make this pointer as a pointer in the class String context
    const char* (String::*d_sp)();
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

    // OK
    s.d_sp = &(String::set);
    
    // Error, d_sp has scope in class String context, not global scope
    s.d_sp = foo;

    return 0;
}