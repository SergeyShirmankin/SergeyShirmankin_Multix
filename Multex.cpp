#include <string> 
#include "Multex.h"
Multex::Multex()
{
	int m = 66;
}
void Multex::writeFile(const std::string& msg)
{
	out.open("Log.txt", std::ios::app);
	if (out.is_open())
	{
		out << msg << std::endl;
	}
	out.close();
}
Multex::~Multex()
{
	int a = 6;
}
void Multex::readFile()
{
	std::ifstream in("Log.txt");
	std::string line;
	if (in.is_open())
	{
		std::cout << "\nИнформация в файле :" << std::endl;
		while (std::getline(in, line))
		{
			std::cout << line << std::endl;
		}
	}
	in.close();
}
