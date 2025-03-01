#include <iostream>

class Surround
{
private:
    class Nested_Private
    {
        public:
            int a;
        private:
            int b;
    };

protected:
    class Nested_Protected
    {
        public:
            int a;
        private:
            int b;
    };
public:
    class Nested_Public
    {
        public:
            int a;
        private:
            int b;
    };

    int x, y;
    void method_to_access_private(void);
};

class Derived_Surround : public Surround
{
    void method_to_access_protected(void);
};

// Nested class which is defined in protected part can be accessed by members of derived classes 
void Derived_Surround::method_to_access_protected(void)
{
    Nested_Protected pt;
}

// Nested class which is defined in private part is only accessed by members of surrounding class
void Surround::method_to_access_private(void)
{
    Nested_Private pv; 
    
    // Members of surrounding class don't have special access to members of nested class which are defined in private and protected parts in nested class
    y = pv.b; // Error

    x = pv.a; // OK
}

int main(void)
{
    // Nested class which is defined in pubic part is visible outside
    Surround::Nested_Public pl;   

    return 0;
}

