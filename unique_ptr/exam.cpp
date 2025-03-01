#include <iostream>
#include <memory>

void pass_by_addr(int *p)
{
	std::cout << p << " " << *p << std::endl;
}

void pass_by_unique_ptr(std::unique_ptr<int> p)
{
	std::cout << p.get() << " " << *p << std::endl;
}

int main(void)
{
	std::unique_ptr<int> p = std::make_unique<int>(5);
	pass_by_addr(p.get());
	pass_by_unique_ptr(std::move(p));
	return 0;
}
