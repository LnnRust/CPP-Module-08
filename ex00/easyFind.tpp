#include "easyFind.hpp"

template <typename T>
typename T::iterator easyFind(T& container, int val)
{
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if(it == container.end())
		throw std::out_of_range("Value not found");
	return it;
}
