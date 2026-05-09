#include "span.hpp"
#include "span.tpp"

int main()
{
	try {
		std::cout << "---- 1st test ----" << std::endl;
		std::cout << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(100);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: ";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: ";
		std::cout << sp.longestSpan() << std::endl;
	}
	catch( std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "---- 2nd test ----" << std::endl;
		std::cout << std::endl;
		Span sp2 = Span(5);
		sp2.addNumber(6);
		sp2.addNumber(3);
		sp2.addNumber(11);
		sp2.addNumber(100);
		sp2.addNumber(56);
		std::cout << "Shortest span: ";
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: ";
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch( std::exception &e) {
		std::cout << e.what() << std::endl;
	}
		try {
		std::cout << std::endl;
		std::cout << "---- 3rd test ----" << std::endl;
		std::cout << std::endl;
		Span sp2 = Span(5);
		sp2.addNumber(6);
		sp2.addNumber(3);
		sp2.addNumber(11);
		sp2.addNumber(100);
		sp2.addNumber(56);
		sp2.addNumber(47);
		sp2.addNumber(1);
		std::cout << "Shortest span: ";
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: ";
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch( std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
