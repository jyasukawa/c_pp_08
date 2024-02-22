#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template <typename T>
typename T::iterator	easyfind(T &container, const int &value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::exception();
	return (it);
}

template <typename T>
typename T::const_iterator	easyfind(const T &container, const int &value)
{
	typename T::const_iterator it_const = std::find(container.begin(), container.end(), value);
	if (it_const == container.end())
		throw std::exception();
	return (it_const);
}

#endif
