
#include <iostream>
#include"Pair.h"
#include "God.h"
#include"Link.h"
#include<string>
#include<vector>
void print_all(Link<God>* g)
{
	while (g)
	{
		std::cout << g->value.mythology << '\n';
		std::cout << g->value.name << '\n';
		std::cout << g->value.vehicle << '\n';
		std::cout << g->value.weapon<< "\n\n";
		g = g->succ;//в коде клсса Link , тип объекта под именем succ является Link, но тип объекта g в функции 
		//принт олл это Link<God> как тогда выполняется присваивание? Ответ в том то что в определении класса link 
		//типы объектов succ prev авоматически означает тип шаблонный агументом шаблона указанным в текущем link
	}
}
int main()
{


	Link<God>a(God("Kei", "titan", "h", "f"));
	Link<God>b(God("Zeus", "olymp", "h", "f"));
	Link<God>c(God("Reya", "titan", "h", "f"));
	Link<God>d(God("Femida", "titan", "h", "f"));
	Link<God>e(God("Aid", "olymp", "h", "f"));
	Link<God>f(God("Gera", "olymp", "h", "f"));
	Link<God>g(God("Urania", "muse", "h", "f"));
	Link<God>h(God("Klio", "muse", "h", "f"));
	Link<God>i(God("Talia", "muse", "h", "f"));

	a.prev = nullptr;
	a.succ = &b;
	b.prev = &a;
	b.succ = &c;
	c.prev = &b;
	c.succ = &d;
	d.prev = &c;
	d.succ = &e;
	e.prev = &d;
	e.succ = &f;
	f.prev = &e;
	f.succ = &g;
	g.prev = &f;
	g.succ = &h;
	h.prev = &g;
	h.succ = &i;
	i.prev = &h;
	i.succ = nullptr;

	Link<God>* titan = nullptr;
	Link<God>* olymp = nullptr;
	Link<God>* muse = nullptr;
	Link<God>* start = &a;
	while (start)

	{
		if (start->value.mythology == "titan")
		{
			if (titan == nullptr)
			{

				titan = new Link<God>(start->value);
				start = start->succ;

			}
			else
			{
				Link<God>* buffer = new Link<God>(start->value);
				titan=titan->add_ordered(buffer);
				start = start->succ;
			}
		}
		else if (start->value.mythology == "olymp")
		{
			if (olymp == nullptr)
			{

				olymp = new Link<God>(start->value);;
				start = start->succ;

			}
			else
			{
				Link<God>* buffer = new Link<God>(start->value);
				olymp=olymp->add_ordered(buffer);
				start = start->succ;
			}
		}
		else if (start->value.mythology == "muse")
		{
			if (muse == nullptr)
			{

				muse = new Link<God>(start->value);
				start = start->succ;

			}
			else
			{
				Link<God>* buffer = new Link<God>(start->value);
				muse=muse->add_ordered(buffer);
				start = start->succ;
			}
		}
	}


	Link<God>* check = titan;

	print_all(check);
	std::cout << "\n\n\n";
	check = olymp;
	print_all(check);
	std::cout << "\n\n\n";
	check = muse;
	print_all(check);


}

