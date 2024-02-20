#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	public:
		Span(void);
		Span(const Span &copy_src);
		Span &operator=(const Span &rhs);
		~Span(void);

		Span(unsigned int n);

		void					addNumber(const int &n);
		void					addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		class AlreadyFullException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};

		class NotEnoughDataException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};

	private:
		unsigned int			_maxSize;
		std::vector<int>	_array;
};

#endif
