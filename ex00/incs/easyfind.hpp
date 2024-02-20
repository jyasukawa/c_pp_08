#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template <typename T>
typename T::iterator	easyfind(T &container, const int &value)//constつけないとコンパイルエラー
{
	typename T::iterator result = std::find(container.begin(), container.end(), value);
	if (result == container.end())
		throw std::exception();
	return (result);
}

template <typename T>
typename T::iterator	easyfind(const T &container, const int &value)
{
	typename T::iterator result = const_cast<T&>(container).begin();
	while (result != const_cast<T&>(container).end() && *result != value)
		result++;
	if (result == const_cast<T&>(container).end())
		throw std::exception();
	return (result);
}

// C++98の環境では、std::findがconstなコンテナに対して使用されると、イテレータもconstとなり、そのため __wrap_iter<const int *> のようなイテレータ型が返されます。しかし、easyfind関数が非constなイテレータ型 (typename T::iterator) を期待しているため、型の不一致が発生しています。
// この問題を解決するために、easyfind関数内でコンテナのconstnessを取り除いてから std::find を呼び出すように変更する

#endif
