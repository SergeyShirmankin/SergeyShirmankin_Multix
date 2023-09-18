#include <iostream>
class Operator
{
public:
	Operator(std::string val)
	{
		value = val;
	}
	std::string getValue()const { return value; }
private:
	 std::string value;
};


std::ostream& operator<<(std::ostream& os, Operator& msgA)
{
	return os<<msgA.getValue ();
  }
