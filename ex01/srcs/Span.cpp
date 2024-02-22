#include "Span.hpp"

Span::Span(void) : _maxSize(0)//_arrayは空のベクターとして初期化
{
	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span &copy_src)
{
	// std::cout << "Span copy constructor called" << std::endl;
	*this = copy_src;
}

Span	&Span::operator=(const Span &rhs)
{
	// std::cout << "Span copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_maxSize = rhs._maxSize;
		this->_array = rhs._array;
	}
	return (*this);
}

Span::~Span(void)
{
	// std::cout << "Span destructor called" << std::endl;
}

Span::Span(const unsigned int &n) : _maxSize(n)
{
	// std::cout << "Span unsigned int constructor called" << std::endl;
}

void	Span::addNumber(const int &n)
{
	if (this->_array.size() == this->_maxSize)
		throw Span::AlreadyFullException();
	this->_array.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (this->_array.size() + std::distance(start, end) > this->_maxSize)
		throw Span::AlreadyFullException();
	this->_array.insert(this->_array.end(), start, end);
}
// std::distance の引数は、2つのイテレータ間の要素の個数（距離）を計算するための関数です
// イテレータ範囲は、C++において、コンテナ内の一部の要素にアクセスするための仕組みです。イテレータはコンテナ内の要素を指し示すオブジェクトであり、イテレータ範囲はそのイテレータの開始位置と終了位置からなる範囲を指します。
// <int>を書き換えることができるため、汎用性もある

unsigned int	Span::shortestSpan(void) const
{
	if (this->_array.size() < 2)
		throw Span::NotEnoughDataException();

	std::vector<int> tmp = _array;//sort関数で元のデータが変更されないように
	unsigned int	result = std::numeric_limits<unsigned int>::max();
	std::sort(tmp.begin(), tmp.end());
	for (unsigned int i = 0; i < this->_array.size() - 1; i++)
		result = std::min(result, static_cast<unsigned int>(tmp[i + 1] - tmp[i]));//引き算でもマイナスになることはない
	return (result);
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_array.size() < 2)
		throw Span::NotEnoughDataException();

	unsigned int min = *std::min_element(this->_array.begin(), this->_array.end());
	unsigned int max = *std::max_element(this->_array.begin(), this->_array.end());
	return (max - min);//引き算でもマイナスになることはない
}

const char *Span::AlreadyFullException::what(void) const throw()
{
	return ("Error: Container doesn't have enough space");
}

const char *Span::NotEnoughDataException::what(void) const throw()
{
	return ("Error: Container doesn't have enough data");
}
