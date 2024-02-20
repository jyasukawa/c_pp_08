#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}



// int main()
// {
// 	std::list<int> mlist;
// 	mlist.push_back(5);
// 	mlist.push_back(17);
// 	if (!mlist.empty()) {
// 			std::cout << mlist.back() << std::endl;
// 			mlist.pop_back();
// 	}
// 	std::cout << mlist.size() << std::endl;
// 	mlist.push_back(3);
// 	mlist.push_back(5);
// 	mlist.push_back(737);
// 	// [...]
// 	mlist.push_back(0);
// 	std::list<int>::iterator it = mlist.begin();
// 	std::list<int>::iterator ite = mlist.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 			std::cout << *it << std::endl;
// 			++it;
// 	}
// 	std::list<int> s(mlist);
// 	return 0;
// }





// void	testVector(void)
// {
// 	std::vector<int>	mstack;

// 	mstack.push_back(5);
// 	mstack.push_back(17);

// 	std::cout << "top = " << *(mstack.end() - 1) << std::endl;
	
// 	mstack.pop_back();

// 	std::cout << "size = " << mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	mstack.push_back(-12);
// 	mstack.push_back(0);

// 	std::vector<int>::iterator	it = mstack.begin();
// 	std::vector<int>::iterator	ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// }

// void	testSubject(void)
// {
// 	MutantStack<int>	mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << "top = " << mstack.top() << std::endl;
	
// 	mstack.pop();

// 	std::cout << "size = " << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(-12);
// 	mstack.push(0);

// 	MutantStack<int>::iterator	it = mstack.begin();
// 	MutantStack<int>::iterator	ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
	
// 	std::stack <int>	s(mstack);
// }

// int	main(void)
// {
// 	testSubject();
// 	testVector();
	
// 	return (0);
// }






// int	main()
// {
// 	std::list<int> mlist;

// 	mlist.push_back(5);
// 	mlist.push_back(17);

// 	std::cout << mlist.back() << std::endl;

// 	mlist.pop_back();

// 	std::cout << mlist.size() << std::endl;

// 	mlist.push_back(3);
// 	mlist.push_back(5);
// 	mlist.push_back(737);
// 	//[...]
// 	mlist.push_back(0);

// 	std::list<int>::iterator it = mlist.begin();
// 	std::list<int>::iterator ite = mlist.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::list<int> s(mlist);
// 	return 0;
// }







// void test()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::list<int> s(mstack);
// 	// return 0;
// }
