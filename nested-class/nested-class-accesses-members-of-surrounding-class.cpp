#include <iostream>

class Surround
{
public:
    int a;
    static int b;

    class Nested_Public
    {
        public:
            int c, d;
            void access_member_of_surrounding(Surround&);
    };
};

// Members of Nested class can access members of surrounding class
void Surround::Nested_Public::access_member_of_surrounding(Surround& s)
{
    c = s.a;
    d = Surround::b;
}

int Surround::b = 1;

int main(void)
{   
    Surround s;
    s.a = 10;

    Surround::Nested_Public pb;
    pb.access_member_of_surrounding(s);

    std::cout << pb.c << " " << pb.d << std::endl;

    return 0;
}