#pragma once
#include <iostream>
#include<sstream>
#include <vector>
template<typename T>
struct S
{
	S(T vall)
		:val{ vall }
	{

	};

	void set(T& value)
	{
		return val = value;
	}//for task 9(9)

	T& operator=(const S& value);//for task (10)
 

	S()
		:val{}
	{
	}

	const T& get() const
	{
		return val;
	}//for task(11)
	
	T& get()
	{
	return  val;
	}//for task 9(5)определять функцию шаблонную можо внутри класса без указаия параметров шаблона
private:
	T val;
};

template <typename T>
std::istream& operator>>(std::istream& ios, S<std::vector<T>>& value)
{
	std::string inter;
	
	char checkStart = '{';
	char checkEnd = '}';
	char comma = ',';
	T val;
	
	ios >> inter;
		if (inter[0] == checkStart)
		{
			inter[0] = ' ';
			while (!ios.eof())
			{

				if (inter[inter.size() - 1] == comma)
				{

					inter[inter.size() - 1] = ' ';
					std::istringstream sign(inter);
					sign >> val;
					value.get().push_back(val);
					std::string check = inter;
					ios >> inter;
				}
				else if (inter[inter.size() - 1] == checkEnd)
				{
					inter[inter.size() - 1] = ' ';
					std::istringstream sign(inter);
					sign >> val;
					value.get().push_back(val);
					break;
				}
				else
				{
					std::cout << "Wrong format without , or }\n";
					break;
				}
			}
		}
		else
		{
			std::cout << "Wrong format without '{'\n";
		}
		return ios;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, S<std::vector<T>>& value)
{
	char checkStart = '{';
	char checkEnd = '}';
	char comma = ',';

	if (value.get().size())
	{
		os << checkStart;

		for (int i = 0; i < value.get().size(); ++i)
		{
			if (i == value.get().size() - 1)
			{
				os << value.get()[i] << checkEnd;
			}
			else
			{
				os << value.get()[i] << ", ";
			}

		}
	}

	return os;
}


  template <typename T>
std::istream& operator>>(std::istream& ios, S<T>& value)
	{
		ios >> value.get();
		return ios;
	}//важно изучить такой способ перегрузки по шаблону

template<typename T>
T& S<T>::operator=(const S& value)
	{
	return val = value.val;
	}

//for task 9(6)
/*template<typename T>
T& S<T>::get()
{
	return  val;
}*///функцию вне класса можно поределять в самом файле где написан класс за предлеы нельзья то есть в cpp файле этого класса 