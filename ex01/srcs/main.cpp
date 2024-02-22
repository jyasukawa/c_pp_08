#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

// int	main(void)
// {
// 	Span sp = Span(10000);

// 	std::vector<int> numbers;
// 	for (int i = 1; i <= 10000; ++i)
// 		numbers.push_back(i);

// 	sp.addNumber(numbers.begin(), numbers.end());

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }
