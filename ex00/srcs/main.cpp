#include "easyfind.hpp"

static void	ft_printValue(const int &value)
{
	std::cout << value << std::endl;
}

int	main(void)
{
	std::vector<int>	array;
	array.push_back(1);
	array.push_back(-2);
	array.push_back(3);
	array.push_back(-4);
	array.push_back(5);
	std::for_each(array.begin(), array.end(), ft_printValue);

	std::cout << "---------------------------------" << std::endl;

	try
	{
		std::vector<int>::iterator it = easyfind(array, 3);
		while (it != array.end())
		{
			std::cout << *it << std::endl;
			it++;
		}
	}
	catch(std::exception &e)
	{
		std::cerr << "Error 1" << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(array, 6);
		std::cout << *it << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Error 2" << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(array, -1);
		std::cout << *it << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Error 3" << std::endl;
	}

	return (0);
}



// int main()
// {
//     // Create a const vector<int> without using initializer list
//     int array[] = {1, 2, 3, 4, 5};
//     const std::vector<int> constVector(array, array + sizeof(array) / sizeof(int));
// 		// std::vector コンストラクタの引数には、イテレータの範囲を指定することができます。ここでは、array の先頭から array + sizeof(array) / sizeof(int) の範囲までを指定しています。
//     try
//     {
//         // Use const iterator for const container in C++98
//         std::vector<int>::const_iterator it_const = easyfind(constVector, 3);
//         std::cout << "Element found in const container: " << *it_const << std::endl;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << "Element not found in const container." << std::endl;
//     }

//     return 0;
// }
