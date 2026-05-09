#include "span.hpp"

/* --- OCF ---*/

Span::Span() {
	_maxSize = 0;
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int n) {
	_maxSize = n;
	std::cout << "Constructor called" << std::endl;
}
Span::Span(const Span &other) {
	_numbers = other._numbers;
	_maxSize = other._maxSize;
}

Span &Span::operator=(const Span &other) {
	if(this != &other)
	{
		this->_numbers = other._numbers;
		this->_maxSize = other._maxSize;
	}
	return *this;
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
}


/* --- Methods ---*/
void	Span::addNumber(int n)
{
	if(_numbers.size() >= _maxSize)
		throw tooManyNumbersException();
	_numbers.push_back(n);
}

int		Span::longestSpan()
{
	if(_numbers.size() < 2)
		throw tooManyNumbersException();
	std::vector<int>::iterator Max = std::max_element(_numbers.begin(), _numbers.end());
	std::vector<int>::iterator Min = std::min_element(_numbers.begin(), _numbers.end());
	return (*Max - *Min);
}

int		Span::shortestSpan()
{
	if(_numbers.size() < 2)
		throw tooManyNumbersException();
	std::vector<int> tmp = _numbers;
	sort(tmp.begin(), tmp.end());
	int shortest = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size(); ++i)
	{
		int span = tmp[i] - tmp[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}
