#pragma once
#include <string>
template <typename T>
struct Link
{
	T value;

	Link* prev;
	Link* succ;
	Link(const T& v, Link* p= nullptr, Link* s=nullptr)
		:value{ v }, prev{ p }, succ{ s }
	{

	}
	Link* add_ordered(Link* newGod)
	{
		Link* begin = this;
		
	
			while(begin->prev != nullptr)
			{
				begin = begin->prev;
			}
			

			while (true)
			{
				if (begin->value > newGod->value && begin->prev == nullptr)
				{
					newGod->prev = nullptr;
					newGod->succ = begin;
					begin->prev = newGod;
					break;
				}
				else if (begin->value < newGod->value && begin->succ == nullptr)
				{
					newGod->succ = nullptr;
					newGod->prev = begin;
					begin->succ = newGod;
					break;
				}
				else if (begin->value < newGod->value && begin->succ->value>newGod->value)
				{
					begin->succ->prev = newGod;
					newGod->succ = begin->succ;
					newGod->prev = begin;
					begin->succ = newGod;
					break;

				}
				else
				{
					begin = begin->succ;
				}
			}
			while (begin->prev != nullptr)
			{
				begin = begin->prev;
			}//чтобыпод конец вернуть из функции начало списка Ба не тот элемент на котором мыостановились(добавили)
			return begin;
	}
	
};

