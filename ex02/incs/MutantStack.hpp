#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &copy_src);
		MutantStack &operator=(const MutantStack &rhs);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin(void) { return (this->c.begin()); }
		iterator end(void) { return (this->c.end()); }
		const_iterator begin(void) const { return (this->c.begin()); }
		const_iterator end(void) const { return (this->c.end()); }
		reverse_iterator rbegin(void) { return (this->c.rbegin()); }
		reverse_iterator rend(void) { return (this->c.rend()); }
		const_reverse_iterator rbegin(void) const { return (this->c.rbegin()); }
		const_reverse_iterator rend(void) const { return (this->c.rend()); }
};

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	// std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy_src) : std::stack<T>(copy_src)
{
	// std::cout << "MutantStack copy constructor called" << std::endl;
	// *this = copy_src;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	// std::cout << "MutantStack copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->std::stack<T>::operator=(rhs);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	// std::cout << "MutantStack destructor called" << std::endl;
}

#endif
