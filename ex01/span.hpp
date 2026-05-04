#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>

class Span
{
	private:
		unsigned int _n;
		Span();
		Span(unsigned int);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
	public:
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

};
