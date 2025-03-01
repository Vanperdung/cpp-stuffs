#include <iostream>

template<typename... Args>
class Logger 
{
public:
	Logger(Args... args)
	{
		log(args...);
	}

	void log(Args... args)
	{
		(std::cout << ... << args) << std::endl;
	}
};

int main(void)
{
	Logger<int, double, const char *> log(1, 2.0, "33");
	return 0;
}
