#pragma once
#include<string>
#include"Status.h"
struct Cave
{
	Cave(int number, int statuss=0, Cave* onee=nullptr, Cave* twoo=nullptr, Cave* threee=nullptr)
		:two{ twoo }, one{ onee }, three{ threee }, status{statuss}, number{ number }
	{
		s = Status(status);
	}
	
	Cave* one;
	Cave* two;
	Cave* three;
	Status s;
	int number;
	int status;


};

