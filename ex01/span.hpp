#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span
{
	private:
		std::vector<int> _numbers;
		unsigned int _maxSize;

	public:
		class tooManyNumbersException : public std::exception {
			const char* what() const throw() { return "Container already full";};
		};
		Span();
		Span(unsigned int);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
};


template<typename Iterator>
void addMany(Iterator begin, Iterator end);
