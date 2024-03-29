#include "easyfind.hpp"

// この要求では、整数のコンテナとして扱われる型Tが言及されていますが、具体的なコンテナの種類は明示されていません。ただし、整数のコンテナとして標準ライブラリで提供される以下のようなコンテナが考えられます。
// std::vector<int>
// std::list<int>
// std::deque<int>
// std::array<int, N>
// 関連コンテナは扱わないという制約があるため、連想コンテナやキー/値ペアのストアを持つコンテナ（例えばstd::map、std::unordered_mapなど）は対象

// static void	ft_printValue(const int &value)
// {
// 	std::cout << value << std::endl;
// }

// int	main(void)
// {
// 	std::vector<int>	array;
// 	array.push_back(-2);
// 	array.push_back(-1);
// 	array.push_back(0);
// 	array.push_back(1);
// 	array.push_back(2);
// 	std::for_each(array.begin(), array.end(), ft_printValue);

// 	std::cout << "---------------------------------" << std::endl;

// 	try
// 	{
// 		std::vector<int>::iterator it = easyfind(array, 0);
// 		while (it != array.end())
// 		{
// 			std::cout << *it << std::endl;
// 			it++;
// 		}
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << "Test1: nonexistent number" << std::endl;
// 	}

// 	std::cout << "---------------------------------" << std::endl;

// 	try
// 	{
// 		std::vector<int>::iterator it = easyfind(array, -3);
// 		std::cout << *it << std::endl;
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << "Test2: nonexistent number" << std::endl;
// 	}

// 	std::cout << "---------------------------------" << std::endl;

// 	try
// 	{
// 		std::vector<int>::iterator it = easyfind(array, 3);
// 		std::cout << *it << std::endl;
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << "Test3: nonexistent number" << std::endl;
// 	}

// 	return (0);
// }



// int main()//const vectorバージョン
// {
// 	//const vector<int> を作る。constのため、push_back()が使えないため、配列からconstのstd::vectorを初期化する
// 	int array[] = {1, 2, 3, 4, 5};
// 	const std::vector<int> constVector(array, array + sizeof(array) / sizeof(int));
// 	// std::vector コンストラクタの引数には、イテレータの範囲を指定することができます。ここでは、array の先頭から array + sizeof(array) / sizeof(int) の範囲までを指定しています。
// 	try
// 	{
// 			std::vector<int>::const_iterator it_const = easyfind(constVector, 3);//whileループなしバージョン
// 			std::cout << *it_const << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 			std::cerr << "Test4: nonexistent number" << std::endl;
// 	}

// 	return 0;
// }



// static void	ft_printValue(const int &value)
// {
// 	std::cout << value << std::endl;
// }

// int	main(void)//listバージョン(vectorをlistに書き換えただけ)
// {
// 	std::list<int>	array;
// 	array.push_back(-2);
// 	array.push_back(-1);
// 	array.push_back(0);
// 	array.push_back(1);
// 	array.push_back(2);
// 	std::for_each(array.begin(), array.end(), ft_printValue);

// 	std::cout << "---------------------------------" << std::endl;

// 	try
// 	{
// 		std::list<int>::iterator it = easyfind(array, 0);
// 		while (it != array.end())
// 		{
// 			std::cout << *it << std::endl;
// 			it++;
// 		}
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << "Test1: nonexistent number" << std::endl;
// 	}

// 	std::cout << "---------------------------------" << std::endl;

// 	try
// 	{
// 		std::list<int>::iterator it = easyfind(array, -3);
// 		std::cout << *it << std::endl;
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << "Test2: nonexistent number" << std::endl;
// 	}

// 	std::cout << "---------------------------------" << std::endl;

// 	try
// 	{
// 		std::list<int>::iterator it = easyfind(array, 3);
// 		std::cout << *it << std::endl;
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << "Test3: nonexistent number" << std::endl;
// 	}

// 	return (0);
// }