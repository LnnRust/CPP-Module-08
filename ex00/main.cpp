#include "easyFind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> v;  // v = integer vector

	v.push_back(1); // push_back add value at the back of vector;
	v.push_back(5);
	v.push_back(42);
	v.push_back(9);

	try
	{
	std::vector<int>::iterator it = easyFind(v, 42);
	std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
	std::cout << e.what() << std::endl;
	}
	return (0);
}
