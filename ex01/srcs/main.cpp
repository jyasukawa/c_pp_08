#include "Span.hpp"

int main()//課題PDFバージョン
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


// int main()//エラーバージョン
// {
// 	Span sp = Span(4);
// 	try
// 	{
// 		sp.addNumber(6);
// 		// sp.addNumber(3);
// 		// sp.addNumber(17);
// 		// sp.addNumber(9);
// 		// sp.addNumber(11);

// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		std::exit(EXIT_FAILURE);
// 	}

// 	return 0;
// }


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
